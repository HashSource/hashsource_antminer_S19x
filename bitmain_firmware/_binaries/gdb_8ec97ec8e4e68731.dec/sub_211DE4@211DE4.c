_DWORD *__fastcall sub_211DE4(int a1)
{
  _DWORD *v2; // r0
  int *v3; // r4
  _DWORD *v4; // r7
  int v5; // r6
  int v6; // r5
  int v7; // r0
  _DWORD *v8; // r5
  int v9; // r0

  v2 = sub_211DBC(*(_DWORD *)(a1 + 108));
  v3 = *(int **)(a1 + 100);
  v4 = v2;
  if ( v3 )
  {
    v5 = 0;
    do
    {
      while ( (v3[5] & 3) == 0 )
      {
        v3 = (int *)v3[3];
        if ( !v3 )
          goto LABEL_7;
      }
      v6 = 3 * v5;
      v7 = *v3;
      ++v5;
      v8 = &v4[v6];
      v8[1] = v3[7];
      v8[2] = sub_327254(v7);
      v9 = sub_162FDC(a1, (int)v3);
      v3 = (int *)v3[3];
      v8[3] = v9;
    }
    while ( v3 );
  }
  else
  {
    v5 = 0;
  }
LABEL_7:
  *v4 = v5;
  return v4;
}
