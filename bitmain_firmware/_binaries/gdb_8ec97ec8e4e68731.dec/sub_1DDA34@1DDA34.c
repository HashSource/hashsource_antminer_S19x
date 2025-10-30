_DWORD *__fastcall sub_1DDA34(int a1, int a2, int a3, int a4, int a5)
{
  _DWORD *v6; // r4
  int v7; // r1
  int v8; // r2
  _DWORD *v9; // r7
  _DWORD *v10; // lr
  int v11; // r0
  int v12; // r1
  int v13; // r2
  int v14; // r4
  int v16; // [sp+4h] [bp-20h] BYREF
  int v17; // [sp+8h] [bp-1Ch]
  int v18; // [sp+Ch] [bp-18h]
  int v19; // [sp+14h] [bp-10h] BYREF
  int v20; // [sp+18h] [bp-Ch]
  int v21; // [sp+1Ch] [bp-8h]

  v6 = (_DWORD *)dword_4886C8;
  v16 = a1;
  v17 = a2;
  v18 = a3;
  if ( dword_4886C8 )
  {
    while ( 1 )
    {
      v7 = *(_DWORD *)(v6[1] + 24);
      v8 = *(_DWORD *)(v6[1] + 28);
      v19 = *(_DWORD *)(v6[1] + 20);
      v20 = v7;
      v21 = v8;
      if ( sub_98F78(&v19, &v16) )
      {
        v9 = (_DWORD *)v6[1];
        if ( a4 == *(_DWORD *)*v9 )
          break;
      }
      v6 = (_DWORD *)*v6;
      if ( !v6 )
        goto LABEL_5;
    }
  }
  else
  {
LABEL_5:
    v9 = sub_9836C(0x20u);
    ((void (__fastcall *)(_DWORD *, int, int, _DWORD))loc_1DD4B4)(v9, a4, a5, 0);
    v10 = sub_9836C(8u);
    v11 = v16;
    v12 = v17;
    v13 = v18;
    v14 = dword_4886C8;
    v10[1] = v9;
    v19 = v11;
    v20 = v12;
    v21 = v13;
    *v10 = v14;
    dword_4886C8 = (int)v10;
    v9[5] = v11;
    v9[6] = v12;
    v9[7] = v13;
  }
  return v9;
}
