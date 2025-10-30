int __fastcall sub_2B3A9C(int result, int a2)
{
  int v2; // r5
  int v3; // r4
  int v5; // r3
  int v6; // r2
  int *i; // r2
  int v8; // r12
  int *v9; // r1
  int v10; // r3
  int v11; // t1
  char v12; // r3
  int v13; // r3
  int v14; // r3

  v2 = result;
  v3 = *(_DWORD *)(result + 160);
  v5 = *(_DWORD *)(v3 + 32);
  if ( (v5 & 0xFF000000) == 0 )
  {
    *(_BYTE *)(v3 + 8) = 0;
    *(_BYTE *)(v3 + 7) = 97;
    if ( !a2 )
      goto LABEL_4;
    v6 = *(_DWORD *)(a2 + 28);
    if ( *(_DWORD *)(v6 + 44) != 4 )
      goto LABEL_4;
    goto LABEL_15;
  }
  result = sub_2DB6D8();
  *(_BYTE *)(v3 + 8) = 0;
  v5 = *(_DWORD *)(v3 + 32);
  if ( a2 )
  {
    v6 = *(_DWORD *)(a2 + 28);
    if ( *(_DWORD *)(v6 + 44) == 4 )
    {
LABEL_15:
      if ( *(_DWORD *)(v6 + 364) )
      {
        v5 |= 0x800000u;
        *(_DWORD *)(v3 + 32) = v5;
      }
    }
  }
  if ( (v5 & 0xFF000000) == 0x5000000 && (unsigned int)*(unsigned __int16 *)(v3 + 36) - 2 <= 1 )
  {
    result = sub_2EF5B0(v2, 0, 28);
    v13 = *(_DWORD *)(v3 + 32);
    if ( result == 1 )
      v14 = v13 | 0x400;
    else
      v14 = v13 | 0x200;
    *(_DWORD *)(v3 + 32) = v14;
  }
LABEL_4:
  for ( i = **(int ***)(*(_DWORD *)(v2 + 160) + 2348); i; i = (int *)*i )
  {
    v8 = i[9];
    if ( v8 && (*(_DWORD *)(*(_DWORD *)(i[10] + 140) + 8) & 0x20000000) != 0 )
    {
      v9 = i + 10;
      v10 = 0;
      while ( v8 != ++v10 )
      {
        v11 = v9[1];
        ++v9;
        result = *(_DWORD *)(*(_DWORD *)(v11 + 140) + 8);
        if ( (result & 0x20000000) == 0 )
          goto LABEL_11;
      }
      v12 = *((_BYTE *)i + 32);
      i[2] = 1;
      *((_BYTE *)i + 32) = v12 | 1;
    }
LABEL_11:
    ;
  }
  return result;
}
