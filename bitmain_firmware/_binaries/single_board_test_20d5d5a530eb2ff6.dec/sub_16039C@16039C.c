int __fastcall sub_16039C(_DWORD *a1, int *a2)
{
  int v3; // r1
  int v5; // r2
  _BOOL4 v6; // r3
  int v7; // r3
  int v9; // r2
  int v10; // r3

  v3 = a2[7];
  v5 = *a2;
  v6 = v3 == 2;
  if ( *a2 )
    v6 = 1;
  if ( v6 )
  {
    if ( v3 == 2 )
    {
      v7 = (int)a2 + v5++;
      *(_BYTE *)(v7 + 4) = 0x80;
    }
    memset((char *)a2 + v5 + 4, 0, 8 - v5);
    sub_160220(a2, a2 + 1, 8u);
  }
  v9 = a2[4];
  *a1 = a2[3];
  a1[1] = v9;
  v10 = a2[6];
  a1[2] = a2[5];
  a1[3] = v10;
  return 1;
}
