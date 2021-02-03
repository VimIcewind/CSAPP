void mark(ptr p) {
        if ((b = isPtr(p)) == NULL)
                return;
        if (blockMarked(b))
                return;
        markBlock(b);
        len = length(b);
        for (i = 0; i < len; i++)
                mark(b[i]);
        return
}

void sweep(ptr b, ptr end) {
        while (b < end) {
                if (blockMarked(b))
                        unmarkBlock(b);
                else if (blockAllocated(b))
                        free(b);
                b = nextBlock(b);
        }
        return;
}
