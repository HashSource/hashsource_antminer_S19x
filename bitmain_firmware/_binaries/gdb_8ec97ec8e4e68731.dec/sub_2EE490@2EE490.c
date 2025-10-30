int __fastcall sub_2EE490(int a1, _DWORD *a2)
{
  int v4; // r10
  int v5; // r0
  int v7; // r3
  _DWORD *v8; // r6
  int v9; // r7
  int v10; // r5
  int v11; // r11
  _DWORD *v12; // r5
  int i; // r4
  int v14; // t1
  _DWORD v15[3]; // [sp+8h] [bp-Ch] BYREF

  v4 = *(_DWORD *)(*(_DWORD *)(a1 + 4) + 444);
  if ( a2[12] != a1 )
    sub_2A6BBC("elflink.c", 13719);
  v5 = a2[7];
  if ( *(_DWORD *)(v5 + 40) != 1 )
    return 0;
  v7 = *(unsigned __int8 *)(v4 + 465);
  v8 = (_DWORD *)a2[14];
  if ( (v7 & 2) != 0 )
    v9 = 0;
  else
    v9 = *(_DWORD *)(v4 + 400);
  if ( v8 )
  {
    do
    {
      v7 = *(_DWORD *)(v8[1] + 4);
      if ( v7 == 5 )
      {
        v7 = v8[40];
        v10 = *(_DWORD *)(v7 + 540);
        if ( v10 )
        {
          v11 = (*(_BYTE *)(v7 + 2341) & 0x40) != 0
              ? sub_347418(*(_DWORD *)(v7 + 96), *(unsigned __int8 *)(*(_DWORD *)(v4 + 392) + 5))
              : *(_DWORD *)(v7 + 104);
          if ( v11 )
          {
            v12 = (_DWORD *)(v10 - 4);
            for ( i = 0; i != v11; ++i )
            {
              v14 = v12[1];
              ++v12;
              if ( v14 <= 0 )
              {
                v7 = -1;
                *v12 = -1;
              }
              else
              {
                *v12 = v9;
                v9 += (*(int (__fastcall **)(int, _DWORD *))(v4 + 404))(a1, a2);
              }
            }
          }
        }
      }
      v8 = (_DWORD *)v8[39];
    }
    while ( v8 );
    v5 = a2[7];
  }
  v15[0] = v9;
  v15[1] = a2;
  sub_2FCBD4(v5, sub_2DB8DC, v15, v7);
  return 1;
}
