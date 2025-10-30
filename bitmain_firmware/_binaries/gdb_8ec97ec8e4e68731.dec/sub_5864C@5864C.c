_DWORD *__fastcall sub_5864C(_DWORD *result, _DWORD *a2)
{
  _DWORD *v3; // r5
  _DWORD *v4; // r6
  int v5; // r0
  int v6; // r0
  int v7; // r3
  int v8; // r2
  int v9; // r0
  int v10; // r3
  int v11; // r7
  _DWORD *v12; // r2
  int v13; // r3
  _DWORD *v14; // [sp+0h] [bp-8h] BYREF
  _DWORD *v15; // [sp+4h] [bp-4h] BYREF

  v3 = result;
  if ( a2 )
  {
    v4 = (_DWORD *)sub_93028(28);
    sub_5864C(&v15, *a2);
    v5 = a2[1];
    *v4 = v15;
    v6 = sub_327254(v5);
    v7 = a2[5];
    v8 = a2[2];
    v4[1] = v6;
    v4[5] = v7;
    v4[2] = v8;
    if ( v7 > 0 )
    {
      v9 = sub_93028(4 * v7);
      v10 = a2[5];
      v4[6] = v9;
      if ( v10 > 0 )
      {
        v11 = 0;
        do
        {
          sub_5864C(&v14, *(_DWORD *)(a2[6] + 4 * v11));
          v12 = v14;
          v13 = v4[6];
          v14 = 0;
          *(_DWORD *)(v13 + 4 * v11++) = v12;
          if ( v14 )
          {
            v15 = v14;
            sub_57E18(&v15);
          }
        }
        while ( a2[5] > v11 );
      }
      *v3 = v4;
      return v3;
    }
    else
    {
      v4[6] = 0;
      *v3 = v4;
      return v3;
    }
  }
  else
  {
    *result = 0;
  }
  return result;
}
