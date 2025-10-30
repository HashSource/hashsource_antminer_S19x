int __fastcall sub_2D06B0(int a1, int a2, _DWORD *a3, int a4)
{
  int v6; // r8
  int *v7; // r6
  int v8; // r7
  int v9; // t1
  int v10; // r9
  int v11; // r11
  int v12; // r5
  int v13; // r0
  int v14; // r1
  _DWORD *v15; // r5
  int v16; // r0
  int *v18; // [sp+8h] [bp-Ch]

  if ( a4 <= 0 )
  {
    v15 = a3;
    v11 = 0;
  }
  else
  {
    v6 = 0;
    v7 = a3;
    v18 = &a3[a4];
    do
    {
      v9 = *v7++;
      v8 = v9;
      v10 = v6;
      v11 = v6;
      v12 = *(_DWORD *)(v9 + 4);
      v13 = sub_2CC04C(a1, v9);
      v14 = v12;
      v15 = &a3[v6];
      if ( v13 )
      {
        v16 = sub_2FC920(*(_DWORD *)(a2 + 28), v14, 0);
        if ( v16 )
        {
          if ( (unsigned int)*(unsigned __int8 *)(v16 + 12) - 3 <= 1 && (*(_BYTE *)(v16 + 13) & 0xC) == 0 )
          {
            ++v6;
            v15 = &a3[v10 + 1];
            v11 = v6;
            a3[v10] = v8;
          }
        }
      }
    }
    while ( v18 != v7 );
  }
  *v15 = 0;
  return v11;
}
