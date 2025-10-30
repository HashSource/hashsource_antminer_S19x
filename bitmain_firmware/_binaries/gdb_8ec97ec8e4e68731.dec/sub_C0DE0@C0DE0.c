int __fastcall sub_C0DE0(char *a1, int a2, unsigned int a3)
{
  int v6; // r2
  int v7; // r1
  int v8; // r1
  int v9; // r2
  int v10; // r1
  int v11; // r0
  int v12; // r2
  char v13; // t1
  int v14; // r3
  int v15; // r2
  __int64 v17; // r0

  if ( a3 >= 0x10000 )
  {
    v17 = sub_94700((int)"ax-general.c", 334, "ax-general.c (ax_string): string length is %d, out of allowed range", a3);
    return sub_C0E94(v17, HIDWORD(v17));
  }
  else
  {
    sub_C0878(a1, a3 + 3);
    v6 = *((_DWORD *)a1 + 1);
    v7 = *(_DWORD *)a1;
    *((_DWORD *)a1 + 1) = v6 + 1;
    *(_BYTE *)(v7 + v6) = (unsigned __int16)(a3 + 1) >> 8;
    v8 = *(_DWORD *)a1;
    v9 = *((_DWORD *)a1 + 1);
    *((_DWORD *)a1 + 1) = v9 + 1;
    *(_BYTE *)(v8 + v9) = a3 + 1;
    if ( a3 )
    {
      v10 = a2 - 1;
      do
      {
        v11 = *((_DWORD *)a1 + 1);
        v12 = *(_DWORD *)a1;
        *((_DWORD *)a1 + 1) = v11 + 1;
        v13 = *(_BYTE *)++v10;
        *(_BYTE *)(v12 + v11) = v13;
      }
      while ( v10 != a2 - 1 + a3 );
    }
    v14 = *((_DWORD *)a1 + 1);
    v15 = *(_DWORD *)a1;
    *((_DWORD *)a1 + 1) = v14 + 1;
    *(_BYTE *)(v15 + v14) = 0;
    return v14 + 1;
  }
}
