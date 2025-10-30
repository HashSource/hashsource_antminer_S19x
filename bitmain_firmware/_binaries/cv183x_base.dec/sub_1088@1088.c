const char *__fastcall sub_1088(__int64 a1)
{
  int v2; // w21
  __int64 v3; // x22
  __int64 v4; // x20
  int v5; // w3
  const char *v6; // x27
  const char *result; // x0
  __int64 v8; // x28
  _QWORD *v9; // x21
  bool v10; // zf
  int v11; // w26
  unsigned int *v13; // x20
  int v14; // w22
  __int64 v15; // x0
  __int64 v16; // x2
  const char *v18; // [xsp+68h] [xbp+68h]
  int v19; // [xsp+74h] [xbp+74h]
  unsigned int v20; // [xsp+78h] [xbp+78h]
  unsigned int v21; // [xsp+7Ch] [xbp+7Ch]
  _QWORD v22[16]; // [xsp+88h] [xbp+88h] BYREF
  int v23; // [xsp+108h] [xbp+108h]

  v2 = 0;
  v3 = qword_41F8;
  seq_printf(a1, "\nModule: [VB], Build Time[%s]\n", "#1 SMP PREEMPT Wed May 12 01:18:51 CST 2021");
  v4 = v3 + 24;
  seq_puts(
    a1,
    "-----VB PUB CONFIG--------------------------------------------------------------------------------------------------"
    "---------------\n");
  seq_printf(a1, "%10s(%3d)\n", "MaxPoolCnt", 512);
  seq_puts(
    a1,
    "\n"
    "-----COMMON POOL CONFIG---------------------------------------------------------------------------------------------"
    "---------------\n");
  do
  {
    while ( !*(_QWORD *)v4 )
    {
      ++v2;
      v4 += 136;
      if ( v2 == 512 )
        goto LABEL_5;
    }
    v5 = v2++;
    seq_printf(
      a1,
      "%10s(%3d)\t%10s(%12d)\t%10s(%3d)\n",
      "PoolId",
      v5,
      "Size",
      *(_DWORD *)(v4 + 40),
      "Count",
      *(_DWORD *)(v4 + 44));
    v4 += 136;
  }
  while ( v2 != 512 );
LABEL_5:
  v18 = (const char *)(v3 + 69752);
  v6 = (const char *)(v3 + 120);
  seq_puts(
    a1,
    "\n"
    "--------------------------------------------------------------------------------------------------------------------"
    "---------------\n");
  v19 = 69648;
  do
  {
    while ( !*((_QWORD *)v6 - 12) )
    {
      v6 += 136;
      v19 += 1024;
      result = v18;
      if ( v6 == v18 )
        return result;
    }
    seq_printf(a1, "%-10s: %s\n", "PoolName", v6);
    seq_printf(a1, "%-10s: %d\n", "PoolId", *((_DWORD *)v6 - 26));
    seq_printf(a1, "%-10s: 0x%llx\n", "PhysAddr", *((_QWORD *)v6 - 12));
    seq_printf(a1, "%-10s: 0x%lx\n", "VirtAddr", *((_QWORD *)v6 - 11));
    seq_printf(a1, "%-10s: %d\n", "IsComm", *((unsigned __int8 *)v6 - 12));
    seq_printf(a1, "%-10s: %d\n", "Owner", *((__int16 *)v6 - 50));
    seq_printf(a1, "%-10s: %d\n", "BlkSz", *((_DWORD *)v6 - 14));
    seq_printf(a1, "%-10s: %d\n", "BlkCnt", *((_DWORD *)v6 - 13));
    seq_printf(a1, "%-10s: %d\n", "Free", *((_DWORD *)v6 - 2));
    seq_printf(a1, "%-10s: %d\n", "MinFree", *((_DWORD *)v6 - 1));
    seq_puts(a1, "\n");
    memset(v22, 0, sizeof(v22));
    v23 = 0;
    seq_puts(a1, "BLK\tBASE\tVB\tSYS\tRGN\tCHNL\tVDEC\tVPSS\tVENC\tH264E\tJPEGE\tMPEG4E\tH265E\tJPEGD\tVO\tVI\tDIS\n");
    seq_puts(a1, "RC\tAIO\tAI\tAO\tAENC\tADEC\tAUD\tVPU\tISP\tIVE\tUSER\tPROC\tLOG\tH264D\tGDC\tPHOTO\tFB\n");
    if ( *((_DWORD *)v6 - 13) )
    {
      v20 = 0;
      v21 = v19;
      do
      {
        v8 = 0;
        seq_printf(a1, "%s%d\t", "#", v20);
        v9 = (_QWORD *)(qword_41F8 + v21);
        do
        {
          while ( 1 )
          {
            v11 = v8;
            if ( ((1LL << v8) & *v9) != 0 )
              break;
            seq_puts(a1, "0\t");
            ++v8;
            if ( v11 == 32 || v11 == 15 )
              goto LABEL_22;
LABEL_15:
            if ( v8 == 33 )
              goto LABEL_23;
          }
          seq_puts(a1, "1\t");
          v10 = (_DWORD)v8 == 32 || (_DWORD)v8 == 15;
          ++*((_DWORD *)v22 + v8++);
          if ( !v10 )
            goto LABEL_15;
LABEL_22:
          seq_puts(a1, "\n");
        }
        while ( v8 != 33 );
LABEL_23:
        ++v20;
        v21 += 8;
      }
      while ( *((_DWORD *)v6 - 13) > v20 );
    }
    v13 = (unsigned int *)v22 + 1;
    v14 = 0;
    seq_puts(a1, "Sum\t");
    seq_printf(a1, "%d\t", LODWORD(v22[0]));
    while ( 1 )
    {
      ++v14;
      v15 = a1;
      if ( v14 == 33 )
        break;
      while ( 1 )
      {
        v16 = *v13++;
        seq_printf(v15, "%d\t", v16);
        if ( v14 != 32 && v14 != 15 )
          break;
        ++v14;
        seq_puts(a1, "\n");
        v15 = a1;
        if ( v14 == 33 )
          goto LABEL_32;
      }
    }
LABEL_32:
    v6 += 136;
    seq_puts(
      v15,
      "\n"
      "------------------------------------------------------------------------------------------------------------------"
      "-----------------\n");
    v19 += 1024;
    result = v18;
  }
  while ( v6 != v18 );
  return result;
}
