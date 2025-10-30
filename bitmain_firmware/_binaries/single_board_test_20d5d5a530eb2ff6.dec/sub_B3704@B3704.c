int __fastcall sub_B3704(_WORD *a1, int a2, const char *a3, int a4, __int16 a5)
{
  bool v6; // zf
  _DWORD *v9; // r7
  int v10; // r4
  int v11; // r0
  int v12; // r1
  int v13; // r2
  int v14; // r3
  int *v15; // t0

  if ( a2 == 1 )
  {
    if ( (unsigned int)(a4 + 1) <= 0x6C )
    {
      v10 = 1;
      memset(a1, 0, 0x6Eu);
      *a1 = 1;
      strncpy((char *)a1 + 2, a3, 0x6Bu);
      return v10;
    }
    return 0;
  }
  if ( a2 == 2 )
  {
    if ( a4 == 4 )
    {
      *a1 = 2;
      *((_DWORD *)a1 + 1) = 0;
      v10 = 1;
      a1[1] = a5;
      *((_DWORD *)a1 + 2) = 0;
      *((_DWORD *)a1 + 3) = 0;
      *((_DWORD *)a1 + 1) = *(_DWORD *)a3;
      return v10;
    }
    return 0;
  }
  v6 = a2 == 10;
  if ( a2 == 10 )
    v6 = a4 == 16;
  if ( !v6 )
    return 0;
  *((_DWORD *)a1 + 1) = 0;
  *((_DWORD *)a1 + 2) = 0;
  v9 = a1 + 4;
  *((_DWORD *)a1 + 3) = 0;
  v10 = 1;
  *((_DWORD *)a1 + 4) = 0;
  *((_DWORD *)a1 + 5) = 0;
  *((_DWORD *)a1 + 6) = 0;
  a1[1] = a5;
  *a1 = 10;
  v11 = *(_DWORD *)a3;
  v12 = *((_DWORD *)a3 + 1);
  v15 = (int *)(a3 + 8);
  v13 = *((_DWORD *)a3 + 2);
  v14 = v15[1];
  *v9 = v11;
  v9[1] = v12;
  v9[2] = v13;
  v9[3] = v14;
  return v10;
}
