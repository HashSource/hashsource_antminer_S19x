void sub_1903A0()
{
  void *v0; // r0
  void *v1; // r0
  int v2; // r0
  int v3; // r11
  int v4; // r0
  int v5; // r0
  _DWORD *v6; // r0
  _DWORD *v7; // r8
  int v8; // r10
  int v9; // r5
  int v10; // r0
  int v11; // r0
  _DWORD *v12; // r2
  _DWORD *v13; // r6
  int v14; // [sp+10h] [bp-8Ch]
  void *v15; // [sp+14h] [bp-88h]
  _DWORD v16[5]; // [sp+18h] [bp-84h] BYREF
  int v17; // [sp+2Ch] [bp-70h]
  int v18; // [sp+30h] [bp-6Ch]
  int v19; // [sp+34h] [bp-68h]
  _BYTE v20[40]; // [sp+38h] [bp-64h] BYREF
  int s[15]; // [sp+60h] [bp-3Ch] BYREF

  v15 = sub_9253C((int)nullsub_39, 0);
  v17 = dword_46BBCC;
  v18 = dword_46BBD0;
  v19 = dword_46BBD4;
  memset(s, 0, 0x38u);
  v14 = dword_487668;
  dword_487668 = dword_48768C;
  v0 = sub_9253C((int)sub_1864D4, 0);
  if ( dword_487950 )
  {
    sub_24C03C(v0);
    sub_24B5BC(-1);
    v1 = memset(v20, 0, sizeof(v20));
    if ( dword_487950 )
    {
      v1 = (void *)((int (__fastcall *)(_BYTE *))loc_23FF20)(v20);
      v20[36] = 1;
    }
  }
  else
  {
    v1 = memset(v20, 0, sizeof(v20));
  }
  dword_4896D8 = 1;
  sub_234884(v1);
  v2 = off_489B4C(&dword_4899A0);
  v3 = dword_48794C;
  dword_48794C = v2;
  v4 = off_489AF8(&dword_4899A0);
  sub_185CC0((int)v16, v17, v18, v19, &s[4], v4 != 0);
  v5 = v16[0];
  s[0] = v16[0];
  s[1] = v16[1];
  s[2] = v16[2];
  if ( dword_487930 )
    sub_187F00(v17, v18, v19, s[0], s[1], s[2], (int)&s[4]);
  if ( sub_232950(v5) )
    v6 = sub_9253C((int)dword_23F744, (int)s);
  else
    v6 = sub_9253C((int)dword_23F744, (int)&dword_46BBCC);
  v7 = v6;
  sub_25B304();
  sub_9253C((int)sub_187120, 0);
  sub_18EF44(s);
  if ( s[12] )
    goto LABEL_26;
  v8 = sub_183A88(s[0], s[1], s[2]);
  v9 = s[3];
  sub_18709C(sub_18528C);
  if ( v9 )
  {
    v10 = *(_DWORD *)(v9 + 204);
    if ( v10 )
    {
      if ( !sub_24224C(v10, v9) )
      {
        sub_18C338(s);
LABEL_26:
        sub_92640(v7);
        sub_92620(v15);
        sub_188090();
        goto LABEL_27;
      }
    }
  }
  if ( s[3] )
  {
    v11 = *(_DWORD *)(s[3] + 204);
    if ( v11 )
      sub_242238(v11, s[3]);
  }
  if ( !dword_487950 )
  {
    v12 = (_DWORD *)s[3];
    v13 = (_DWORD *)dword_48A4D4;
    if ( dword_48A4D4 )
    {
      do
      {
        if ( v13[11] != 2 && v13[51] && v13 != v12 )
        {
          sub_23F9F0(v13[2], v13[3], v13[4]);
          sub_242238(v13[51], v13);
          v12 = (_DWORD *)s[3];
        }
        v13 = (_DWORD *)v13[1];
      }
      while ( v13 );
    }
    if ( v12 )
      sub_23F9F0(v12[2], v12[3], v12[4]);
  }
  if ( v9 && *(_DWORD *)(v9 + 204) && !sub_2422D4() || (!v8 || !*(_DWORD *)(v8 + 24)) && sub_1889B4() )
    goto LABEL_26;
  sub_17CFD4(1, 0);
  sub_92640(v7);
  sub_92620(v15);
  sub_188090();
  if ( dword_4876A0
    && (sub_98F78(&qword_4878EC, &dword_475848) || !sub_23F1E0(qword_4878EC, HIDWORD(qword_4878EC), unk_4878F4)) )
  {
    sub_259858("completed.\n");
    dword_48794C = v3;
    if ( !v20[36] )
      goto LABEL_28;
    goto LABEL_36;
  }
LABEL_27:
  dword_48794C = v3;
  if ( !v20[36] )
  {
LABEL_28:
    dword_487668 = v14;
    return;
  }
LABEL_36:
  v20[36] = 0;
  ((void (__fastcall *)(_BYTE *))loc_23FC8C)(v20);
  dword_487668 = v14;
}
