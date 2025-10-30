__int64 __fastcall sub_720(__int64 a1, _QWORD *a2)
{
  int v3; // w28
  signed __int64 v4; // x19
  signed __int64 v5; // x20
  char *v6; // x1
  __int64 v8; // x3

  v3 = a2[1] - *a2;
  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 256) + 80LL);
  if ( v3 + ((unsigned int)a2[19] << 12) > 0xA0000 )
    return 4294967274LL;
  v5 = *a2 - v4;
  if ( v3 )
  {
    while ( 1 )
    {
      v6 = (char *)(v4 + v5);
      if ( (v4 & 0x4000000000LL) != 0 )
      {
        if ( (unsigned int)remap_pfn_range(a2, v6, ((v4 & 0x3FFFFFFFFFuLL) + memstart_addr) >> 12, 4096, a2[9]) )
          return 4294967285LL;
      }
      else if ( (unsigned int)remap_pfn_range(a2, v6, (unsigned __int64)(v4 - kimage_voffset) >> 12, 4096, a2[9]) )
      {
        return 4294967285LL;
      }
      if ( (word_3E0A & 4) != 0 )
      {
        if ( (v4 & 0x4000000000LL) != 0 )
          v8 = (v4 & 0x3FFFFFFFFFLL) + memstart_addr;
        else
          v8 = v4 - kimage_voffset;
        _dynamic_pr_debug(off_3DE8, "mmap vir(%p) phys(%#llx)\n", (const void *)v4, v8);
        v4 += 4096LL;
        v3 -= 4096;
        if ( !v3 )
          return 0;
      }
      else
      {
        v4 += 4096LL;
        v3 -= 4096;
        if ( !v3 )
          return 0;
      }
    }
  }
  return 0;
}
