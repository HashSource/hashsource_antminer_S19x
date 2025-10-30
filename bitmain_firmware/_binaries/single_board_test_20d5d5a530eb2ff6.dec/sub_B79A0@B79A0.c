signed int __fastcall sub_B79A0(_DWORD *a1, void *a2, signed int a3)
{
  int *v6; // r3
  int v7; // r6
  unsigned int v8; // r3
  bool v9; // cc
  int v11; // r3
  int v12; // r2

  v6 = (int *)a1[9];
  v7 = v6[1];
  if ( (a1[6] & 0x200) != 0 )
    v7 = *v6;
  sub_B66FC((int)a1, 15);
  v8 = *(_DWORD *)v7;
  if ( a3 < 0 )
    goto LABEL_16;
  if ( a3 >= v8 )
    a3 = *(_DWORD *)v7;
  v9 = (int)a2 <= 0;
  if ( a2 )
    v9 = a3 <= 0;
  if ( v9 )
  {
LABEL_16:
    if ( !v8 && (a3 = a1[8]) != 0 )
    {
      sub_B6710((int)a1, 9);
      return a3;
    }
    else
    {
      return a3;
    }
  }
  else
  {
    memcpy(a2, *(const void **)(v7 + 4), a3);
    v11 = *(_DWORD *)(v7 + 4);
    v12 = *(_DWORD *)(v7 + 8) - a3;
    *(_DWORD *)v7 -= a3;
    *(_DWORD *)(v7 + 8) = v12;
    *(_DWORD *)(v7 + 4) = v11 + a3;
    return a3;
  }
}
