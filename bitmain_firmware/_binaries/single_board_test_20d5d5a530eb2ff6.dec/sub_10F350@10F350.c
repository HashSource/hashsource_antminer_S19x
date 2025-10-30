int __fastcall sub_10F350(int *a1, int a2, int a3, _DWORD *a4)
{
  int v4; // r5
  unsigned int v6; // r4
  int v8; // r0
  _DWORD *v10; // r10
  bool v11; // zf
  int v12; // r0
  int v13; // r0
  bool v14; // nf
  bool v15; // vf
  unsigned int v16; // r1
  _DWORD v18[2]; // [sp+0h] [bp-8h] BYREF

  v4 = *a1;
  if ( *a1 )
  {
    v6 = 0;
    v8 = *a1;
    v18[0] = 0;
    v18[1] = 0;
    sub_10EF78(v8);
    v10 = (_DWORD *)sub_10F334(*(_DWORD **)(v4 + 4), a2, a3);
    sub_10EF80(v4);
    v11 = a2 == 2;
    if ( a2 != 2 )
      v11 = v10 == 0;
    if ( v11 )
    {
      do
      {
        v13 = sub_10C010(*(_DWORD *)(v4 + 8));
        v15 = __OFSUB__(v6, v13);
        v14 = (int)(v6 - v13) < 0;
        v16 = v6++;
        if ( v14 == v15 )
        {
          if ( !v10 )
            return 0;
          goto LABEL_9;
        }
        v12 = sub_10C01C(*(_DWORD **)(v4 + 8), v16);
      }
      while ( !sub_10EFCC(v12) );
      v10 = v18;
      if ( sub_10F23C(v18) )
        goto LABEL_10;
    }
    else
    {
LABEL_9:
      if ( sub_10F23C(v10) )
      {
LABEL_10:
        *a4 = *v10;
        a4[1] = v10[1];
        return 1;
      }
    }
  }
  return 0;
}
