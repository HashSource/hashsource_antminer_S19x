int __fastcall sub_2CCC68(int result, int a2, _DWORD *a3)
{
  int v4; // r7
  int v6; // r4
  char *v7; // r8
  int v8; // r9
  double v9; // r2
  int v10; // r12
  int v11; // lr
  int v12; // lr
  int v13; // r1
  int v14; // r1
  _BYTE *v15; // r3
  int v16; // r2
  int v17; // r1
  int v18; // r3
  int v19; // r1
  unsigned int v20; // r3
  int v21; // r3
  int **v22; // r1
  int (__fastcall *v23)(int, int, int); // r3
  int v24; // r8
  int v25; // r1
  int v26; // r2
  int v27; // r1
  int v28; // r2
  int v29; // r2
  bool v30; // zf
  int v31; // r1
  int v32; // r2
  int v33; // r1
  int v34; // r2
  int v35; // r1
  bool v36; // zf
  int v37; // [sp+Ch] [bp-2Ch]

  if ( a3[1] )
    return result;
  v4 = result;
  v6 = *(_DWORD *)(a2 + 140);
  v7 = *(char **)a2;
  v8 = *(_DWORD *)(*(_DWORD *)(result + 4) + 444);
  if ( *a3 )
  {
    if ( (*(_DWORD *)(*a3 + 12) & 1) != 0 )
    {
      v18 = *(_DWORD *)(a2 + 20);
      if ( (v18 & 0x2000) != 0 && v7[1] == 100 && v7[6] == 95 )
      {
        HIDWORD(v9) = v18 | 0x8000000;
        *(_DWORD *)(a2 + 20) = HIDWORD(v9);
        v37 = 1;
        *(_DWORD *)v6 = -1;
        goto LABEL_6;
      }
    }
  }
  else if ( (*(_DWORD *)(a2 + 20) & 0x10000000) != 0 )
  {
    if ( ((*(_DWORD *)(result + 40) >> 5) & 0x28000) != 0 )
    {
      if ( v7[1] == 122 )
      {
        result = (int)sub_2CBD84(result, *(char **)a2);
        v7 = (char *)result;
        if ( !result )
          goto LABEL_39;
      }
    }
    else if ( (*(_BYTE *)(a2 + 24) & 0x30) == 0x10 )
    {
      result = (int)sub_2CBDD0(result, *(char **)a2);
      if ( !result )
        goto LABEL_39;
      if ( v7[1] == 122 )
      {
        v7 = (char *)result;
        sub_2A6BBC("elf.c", 3184);
      }
      else
      {
        v7 = (char *)result;
      }
    }
  }
  result = sub_2F0184(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v4 + 160) + 2348) + 4), v7, 0);
  *(_DWORD *)v6 = result;
  if ( result == -1 )
    goto LABEL_39;
  HIDWORD(v9) = *(_DWORD *)(a2 + 20);
  v37 = 0;
LABEL_6:
  v10 = BYTE4(v9) & 1;
  if ( (BYTE4(v9) & 1) != 0 || (*(_BYTE *)(a2 + 24) & 1) != 0 )
    *(_DWORD *)(v6 + 12) = *(_DWORD *)(a2 + 28);
  else
    *(_DWORD *)(v6 + 12) = BYTE4(v9) & 1;
  LODWORD(v9) = *(_DWORD *)(a2 + 64);
  v11 = *(_DWORD *)(a2 + 36);
  result = 0;
  *(_QWORD *)(v6 + 16) = 0;
  *(_DWORD *)(v6 + 28) = 0;
  *(_DWORD *)(v6 + 24) = v11;
  if ( LODWORD(v9) > 0x1E )
  {
    result = sub_2A6A5C("%B: error: Alignment power %d of section `%A' is too big", v4);
    goto LABEL_39;
  }
  v12 = HIDWORD(v9) & 0x2000000;
  *(_DWORD *)(v6 + 44) = a2;
  *(_DWORD *)(v6 + 48) = 0;
  *(_DWORD *)(v6 + 36) = 1 << SLOBYTE(v9);
  LODWORD(v9) = *(_DWORD *)(v6 + 4);
  if ( (HIDWORD(v9) & 0x2000000) != 0 )
  {
    if ( !LODWORD(v9) )
    {
      *(_DWORD *)(v6 + 4) = 17;
LABEL_12:
      *(_DWORD *)(v6 + 40) = 4;
      goto LABEL_13;
    }
  }
  else
  {
    result = WORD2(v9) & 0x103;
    if ( result == 1 )
    {
      if ( !LODWORD(v9) )
      {
        *(_DWORD *)(v6 + 4) = 8;
        goto LABEL_13;
      }
    }
    else
    {
      if ( !LODWORD(v9) )
      {
        *(_DWORD *)(v6 + 4) = 1;
        goto LABEL_13;
      }
      if ( LODWORD(v9) == 8 )
        v19 = BYTE4(v9) & 1;
      else
        v19 = 0;
      if ( v19 )
      {
        result = sub_2A6A5C("warning: section `%A' type changed to PROGBITS", v9);
        HIDWORD(v9) = *(_DWORD *)(a2 + 20);
        *(_DWORD *)(v6 + 4) = 1;
        v10 = BYTE4(v9) & 1;
        v12 = HIDWORD(v9) & 0x2000000;
        goto LABEL_13;
      }
    }
  }
  if ( LODWORD(v9) <= 0x10 )
  {
    if ( LODWORD(v9) >= 0xE )
    {
      *(_DWORD *)(v6 + 40) = *(unsigned __int8 *)(*(_DWORD *)(v8 + 392) + 10) >> 3;
    }
    else if ( LODWORD(v9) == 6 )
    {
      *(_DWORD *)(v6 + 40) = *(unsigned __int8 *)(*(_DWORD *)(v8 + 392) + 6);
    }
    else if ( LODWORD(v9) > 6 )
    {
      if ( LODWORD(v9) == 9 )
      {
        if ( (*(_BYTE *)(*(_DWORD *)(*(_DWORD *)(v4 + 4) + 444) + 464) & 4) != 0 )
          *(_DWORD *)(v6 + 40) = *(unsigned __int8 *)(*(_DWORD *)(v8 + 392) + 3);
      }
      else if ( LODWORD(v9) == 11 )
      {
        *(_DWORD *)(v6 + 40) = *(unsigned __int8 *)(*(_DWORD *)(v8 + 392) + 5);
      }
    }
    else if ( LODWORD(v9) == 4 )
    {
      if ( (*(_BYTE *)(*(_DWORD *)(*(_DWORD *)(v4 + 4) + 444) + 464) & 8) != 0 )
        *(_DWORD *)(v6 + 40) = *(unsigned __int8 *)(*(_DWORD *)(v8 + 392) + 4);
    }
    else if ( LODWORD(v9) == 5 )
    {
      *(_DWORD *)(v6 + 40) = *(unsigned __int8 *)(*(_DWORD *)(v8 + 392) + 8);
    }
    goto LABEL_13;
  }
  if ( LODWORD(v9) == 1879048189 )
  {
    v27 = *(_DWORD *)(v6 + 32);
    result = 0;
    v28 = *(_DWORD *)(v4 + 160);
    *(_DWORD *)(v6 + 40) = 0;
    v29 = *(_DWORD *)(v28 + 568);
    if ( !v27 )
    {
LABEL_110:
      *(_DWORD *)(v6 + 32) = v29;
      goto LABEL_13;
    }
    v30 = v29 == 0;
    if ( v29 )
      v30 = v27 == v29;
    if ( !v30 )
    {
      v31 = 3305;
LABEL_107:
      result = sub_2A6BBC("elf.c", v31);
      HIDWORD(v9) = *(_DWORD *)(a2 + 20);
      v10 = BYTE4(v9) & 1;
      v12 = HIDWORD(v9) & 0x2000000;
    }
  }
  else if ( LODWORD(v9) <= 0x6FFFFFFD )
  {
    if ( LODWORD(v9) == 17 )
      goto LABEL_12;
    if ( LODWORD(v9) == 1879048182 )
    {
      if ( *(_BYTE *)(*(_DWORD *)(v8 + 392) + 10) == 64 )
        v34 = 0;
      else
        v34 = 4;
      *(_DWORD *)(v6 + 40) = v34;
    }
  }
  else
  {
    if ( LODWORD(v9) != 1879048190 )
    {
      if ( LODWORD(v9) == 1879048191 )
        *(_DWORD *)(v6 + 40) = 2;
      goto LABEL_13;
    }
    v32 = *(_DWORD *)(v6 + 32);
    *(_DWORD *)(v6 + 40) = 0;
    v33 = *(_DWORD *)(v4 + 160);
    if ( !v32 )
    {
      v29 = *(_DWORD *)(v33 + 572);
      goto LABEL_110;
    }
    v35 = *(_DWORD *)(v33 + 572);
    v36 = v32 == v35;
    if ( v32 != v35 )
      v36 = v35 == 0;
    if ( !v36 )
    {
      v31 = 3317;
      goto LABEL_107;
    }
  }
LABEL_13:
  if ( v10 )
    *(_DWORD *)(v6 + 8) |= 2u;
  if ( (BYTE4(v9) & 8) == 0 )
    *(_DWORD *)(v6 + 8) |= 1u;
  if ( (BYTE4(v9) & 0x10) != 0 )
    *(_DWORD *)(v6 + 8) |= 4u;
  if ( (HIDWORD(v9) & 0x800000) != 0 )
  {
    v13 = *(_DWORD *)(a2 + 120);
    *(_DWORD *)(v6 + 8) |= 0x10u;
    *(_DWORD *)(v6 + 40) = v13;
  }
  if ( (HIDWORD(v9) & 0x1000000) != 0 )
    *(_DWORD *)(v6 + 8) |= 0x20u;
  if ( !v12 && *(_DWORD *)(*(_DWORD *)(a2 + 140) + 116) )
    *(_DWORD *)(v6 + 8) |= 0x200u;
  if ( (WORD2(v9) & 0x400) != 0 )
  {
    v14 = *(_DWORD *)(a2 + 36);
    *(_DWORD *)(v6 + 8) |= 0x400u;
    if ( !v14 && (WORD2(v9) & 0x100) == 0 )
    {
      v25 = *(_DWORD *)(a2 + 164);
      *(_DWORD *)(v6 + 24) = 0;
      if ( v25 )
      {
        v26 = *(_DWORD *)(v25 + 8) + *(_DWORD *)(v25 + 12);
        *(_DWORD *)(v6 + 24) = v26;
        if ( v26 )
          *(_DWORD *)(v6 + 4) = 8;
      }
    }
  }
  if ( (HIDWORD(v9) & 0x2008000) == 0x8000 )
    *(_DWORD *)(v6 + 8) |= 0x80000000;
  if ( (BYTE4(v9) & 4) == 0 )
    goto LABEL_67;
  v15 = (_BYTE *)*a3;
  if ( !*a3
    || (v16 = *(_DWORD *)(v6 + 64), v17 = *(_DWORD *)(v6 + 80), !(v16 + v17))
    || (result = *v15 & 3, result != 2) && (v15[3] & 8) == 0 )
  {
    v20 = *(unsigned __int8 *)(a2 + 25);
    v30 = (v20 & 4) == 0;
    v21 = (v20 >> 2) & 1;
    if ( v30 )
      v22 = (int **)(v6 + 60);
    else
      v22 = (int **)(v6 + 76);
    result = sub_2CCB88(v4, v22, v7, v21, v37);
    if ( !result )
      goto LABEL_39;
    goto LABEL_67;
  }
  if ( v16 )
  {
    if ( *(_DWORD *)(v6 + 60) )
      goto LABEL_126;
    result = sub_2CCB88(v4, (int **)(v6 + 60), v7, 0, v37);
    if ( result )
    {
      v17 = *(_DWORD *)(v6 + 80);
LABEL_126:
      if ( !v17 )
        goto LABEL_67;
      goto LABEL_37;
    }
LABEL_39:
    a3[1] = 1;
    return result;
  }
LABEL_37:
  if ( !*(_DWORD *)(v6 + 76) )
  {
    result = sub_2CCB88(v4, (int **)(v6 + 76), v7, 1, v37);
    if ( !result )
      goto LABEL_39;
  }
LABEL_67:
  v23 = *(int (__fastcall **)(int, int, int))(v8 + 92);
  v24 = *(_DWORD *)(v6 + 4);
  if ( v23 )
  {
    result = v23(v4, v6, a2);
    if ( !result )
      goto LABEL_39;
  }
  if ( v24 == 8 )
  {
    if ( *(_DWORD *)(a2 + 36) )
      *(_DWORD *)(v6 + 4) = 8;
  }
  return result;
}
