void __fastcall sub_17B084(int a1)
{
  int v1; // r5
  _DWORD *v2; // r0
  int v3; // r0
  int v4; // r4
  int v5; // r6
  int v6; // r0
  int v7; // r0
  _BYTE *v8; // r4
  _DWORD **v9; // r5
  int v10; // r7
  _DWORD **v11; // r9
  _DWORD *v12; // r7
  _DWORD *i; // r4
  _DWORD *v14; // r8
  _DWORD *v15; // t1
  _DWORD *v16; // r0
  _DWORD *v17; // r0
  int *v18; // r4
  int v19; // r9
  int v20; // r4
  _DWORD *v21; // r0
  int v22; // r5
  int v23; // r7
  int v24; // r0
  int v25; // r11
  __int64 v26; // r0
  int v27; // r1
  const char *v28; // r5
  int v29; // r7
  int v30; // r8
  int v31; // r0
  int v32; // r0
  __int64 v33; // r4
  void *v34; // r8
  int v35; // r7
  int v36; // r0
  _DWORD *v37; // r0
  __int64 v38; // r0
  int v39; // r7
  _BYTE *v40; // [sp+10h] [bp-7Ch]
  int v41; // [sp+14h] [bp-78h]
  _BYTE *v42; // [sp+18h] [bp-74h]
  int v43; // [sp+28h] [bp-64h]
  _BYTE *v44; // [sp+30h] [bp-5Ch] BYREF
  _BYTE *v45; // [sp+34h] [bp-58h]
  int v46; // [sp+38h] [bp-54h]
  _BYTE v47[24]; // [sp+3Ch] [bp-50h] BYREF
  int v48; // [sp+54h] [bp-38h]

  v1 = sub_26EA24(a1);
  v2 = (_DWORD *)sub_26BC70(v1);
  v3 = sub_171258(v2);
  if ( **(_BYTE **)(v3 + 24) == 1 )
  {
    v1 = sub_26210C(v1);
    v17 = (_DWORD *)sub_26BC70(v1);
    v4 = sub_171258(v17);
  }
  else
  {
    v4 = v3;
  }
  sub_2665F0(v47);
  if ( v48 )
  {
    v1 = sub_263504(v1, 0, 0, 0, 0);
    v16 = (_DWORD *)sub_26BC70(v1);
    v4 = sub_171258(v16);
  }
  v5 = sub_170040(v4);
  if ( **(_BYTE **)(v4 + 24) == 3
    && (v6 = sub_2616BC(v1), v7 = sub_26EBA8(v6), ((int (__fastcall *)(int, int, int))loc_179644)(v5, v4, v7)) )
  {
    v43 = sub_323AE0(1, sub_179620, sub_1795C8, &loc_179570, sub_93094, &loc_179570);
    v44 = 0;
    v45 = 0;
    v46 = 0;
    ((void (__fastcall *)(int, _BYTE **, int))loc_17AE60)(v43, &v44, v1);
    v8 = v44;
    v9 = (_DWORD **)v45;
    if ( v44 != v45 )
    {
      v10 = v45 - v44;
      sub_17B808(v44, v45, 2 * (31 - __clz((v45 - v44) >> 2)), sub_17957C);
      if ( v10 <= 64 )
      {
        sub_17B5EC(v8, v9, sub_17957C);
      }
      else
      {
        v11 = (_DWORD **)(v8 + 64);
        sub_17B5EC(v8, v8 + 64, sub_17957C);
        while ( v9 != v11 )
        {
          v12 = *v11;
          for ( i = v11; ; i[1] = *i )
          {
            v14 = i;
            v15 = (_DWORD *)*--i;
            if ( !sub_17957C(v12, v15) )
              break;
          }
          ++v11;
          *v14 = v12;
        }
      }
      v9 = (_DWORD **)v44;
      v42 = v45;
      if ( v45 != v44 )
      {
        v40 = v44;
        v41 = 0;
        do
        {
          v18 = *(int **)v40;
          v19 = *(_DWORD *)(*(_DWORD *)v40 + 4);
          v40 += 4;
          if ( v19 >= 0 )
          {
            if ( v41 )
            {
              sub_259F10((const char *)&word_356638);
              v19 = v18[1];
            }
            v20 = *v18;
            v21 = (_DWORD *)sub_26BC70(v20);
            v22 = sub_171258(v21);
            v23 = ((int (__fastcall *)(int))loc_26C09C)(v20);
            v24 = sub_26BFE0(v20);
            v25 = ((int (__fastcall *)(int, int, int))loc_179644)(v5, v22, v23 + v24);
            v26 = sub_26F824(v25, 3);
            v27 = ((int (__fastcall *)(_DWORD, _DWORD))loc_26C09C)(v26, HIDWORD(v26));
            v28 = *(const char **)(*(_DWORD *)(v22 + 24) + 8);
            if ( !v28 )
              v28 = "<unnamed type>";
            v29 = sub_25AC8C(v5, v27);
            v30 = ((int (__fastcall *)(int))loc_26C09C)(v20);
            v31 = sub_26BFE0(v20);
            v32 = sub_25AC8C(v5, v30 + v31);
            sub_259F10("vtable for '%s' @ %s (subobject @ %s):\n", v28, v29, v32);
            if ( v19 >= 0 )
            {
              v33 = 0;
              do
              {
                sub_259F10(aD_23, (_DWORD)v33);
                v38 = sub_26F824(v25, 3);
                v39 = sub_25CE0C(v38, HIDWORD(v38), v33, HIDWORD(v33));
                if ( ((int (__fastcall *)(int))loc_16BB30)(v5) )
                  v39 = sub_2616BC(v39);
                v34 = sub_92E28();
                v35 = sub_26EBA8(v39);
                v36 = sub_92E40((int)v34);
                v37 = (_DWORD *)sub_242F8C(v36);
                sub_267E04(v47, v5, v35, *v37);
                sub_259F10((const char *)&word_356638);
                ++v33;
              }
              while ( v19 >= (int)v33 );
            }
            ++v41;
          }
        }
        while ( v42 != v40 );
        v9 = (_DWORD **)v44;
      }
    }
    if ( v9 )
      sub_339E64(v9);
    if ( v43 )
      sub_323B84(v43);
  }
  else
  {
    sub_259F10("This object does not have a virtual function table\n");
  }
}
