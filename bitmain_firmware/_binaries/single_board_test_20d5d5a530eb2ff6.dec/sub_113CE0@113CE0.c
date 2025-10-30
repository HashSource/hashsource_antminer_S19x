int __fastcall sub_113CE0(int *a1, int a2)
{
  signed int v2; // r4
  _DWORD *v4; // r5
  int v5; // r8
  int v6; // r6
  int v7; // r7
  int v8; // r0

  if ( !a1 )
    return 0;
  v2 = a2;
  if ( (a2 >= sub_10C010(*a1)) | ((unsigned int)a2 >> 31) )
    return 0;
  v4 = (_DWORD *)*a1;
  v5 = sub_10BC04((int *)*a1, v2);
  v6 = sub_10C010((int)v4);
  a1[1] = 1;
  if ( v6 != v2 )
  {
    if ( v2 )
      v7 = *(_DWORD *)(sub_10C01C(v4, v2 - 1) + 8);
    else
      v7 = *(_DWORD *)(v5 + 8) - 1;
    if ( *(_DWORD *)(sub_10C01C(v4, v2) + 8) > v7 + 1 && v6 > v2 )
    {
      do
      {
        v8 = sub_10C01C(v4, v2++);
        --*(_DWORD *)(v8 + 8);
      }
      while ( v6 != v2 );
    }
  }
  return v5;
}
