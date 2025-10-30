void __fastcall sub_267F74(int a1, __int64 a2, int a3, int a4, int a5, int a6, _DWORD *src, unsigned int a8)
{
  unsigned int v10; // r8
  int v11; // r0
  int v12; // r11
  int v13; // r0
  int v14; // r4
  int v15; // r3
  __int64 v16; // r2
  __int64 v17; // r0
  unsigned int v18; // r4
  unsigned int v19; // r7
  _DWORD *v20; // r0
  int v21; // r1
  unsigned int v22; // r3
  unsigned int v23; // r4
  __int64 v24; // r0
  unsigned int v25; // r5
  int v26; // r3
  __int64 v27; // r2
  unsigned int v28; // r1
  int v29; // r0
  int v30; // [sp+4h] [bp-78h]
  __int64 v31; // [sp+18h] [bp-64h]
  unsigned int v33; // [sp+2Ch] [bp-50h]
  unsigned int v34; // [sp+30h] [bp-4Ch]
  int v35; // [sp+38h] [bp-44h]
  _DWORD *v36; // [sp+3Ch] [bp-40h]
  int v37; // [sp+40h] [bp-3Ch]
  int v38; // [sp+44h] [bp-38h]
  int v39; // [sp+4Ch] [bp-30h]
  __int64 v40; // [sp+58h] [bp-24h] BYREF
  __int64 v41; // [sp+60h] [bp-1Ch] BYREF
  __int64 v42; // [sp+68h] [bp-14h] BYREF
  __int64 v43; // [sp+70h] [bp-Ch] BYREF

  v10 = a8;
  v36 = *(_DWORD **)(*(_DWORD *)(a1 + 24) + 20);
  v11 = sub_171258(v36);
  v12 = sub_170058(v11);
  v13 = a1;
  v14 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 24) + 24) + 12);
  v39 = v14;
  if ( !sub_171B30(v13, &v40, &v41) )
  {
    sub_946B0("unable to get bounds of array, assuming null array");
    v40 = 0;
LABEL_27:
    sub_B7DB4(a8);
    goto LABEL_28;
  }
  v15 = *(_DWORD *)(v14 + 24);
  if ( *(_BYTE *)v15 == 12 )
    v14 = *(_DWORD *)(v15 + 20);
  if ( sub_1707CC(v14, v40, &v42) && sub_1707CC(v14, v41, &v43) )
  {
    v16 = v42;
    v17 = v43;
  }
  else
  {
    sub_946B0("unable to get positions in array, use bounds instead");
    v16 = v40;
    v17 = v41;
    v42 = v40;
    v43 = v41;
  }
  if ( v17 < v16 )
    goto LABEL_27;
  v18 = v17 + 1 - v16;
  sub_B7DB4(a8);
  if ( v18 > a8 )
  {
    if ( !src[7] )
    {
LABEL_25:
      sub_B7E5C();
      sub_25A418(a4, "...");
      return;
    }
    v19 = v18;
    v37 = a5 + 1;
    v35 = 2 * (a5 + 1);
    v33 = 0;
    while ( 1 )
    {
      if ( v10 )
      {
        if ( src[1] )
        {
          sub_25A418(a4, ",\n");
          sub_25A7A0(v35, a4);
        }
        else
        {
          sub_25A418(a4, ", ");
        }
      }
      v20 = (_DWORD *)sub_25A704(v35);
      sub_259B58(v20);
      if ( src[12] )
      {
        v29 = sub_26DAF4(v39, v21, (unsigned int)v40 + v10, (v40 + (unsigned __int64)v10) >> 32);
        (*((void (__fastcall **)(int, int, _DWORD *))off_46D5A4[0] + 32))(v29, a4, src);
      }
      v22 = src[8];
      v23 = v10 + 1;
      v34 = v10 + 1;
      v24 = a2 + v10 * v12;
      v31 = v24;
      if ( v22 == -1 )
        goto LABEL_31;
      if ( v19 <= v23 )
      {
        ++v10;
        v28 = 1;
      }
      else
      {
        v25 = v12 + v10 * v12;
        do
        {
          v27 = a2 + v25;
          v25 += v12;
          LODWORD(v24) = ((int (__fastcall *)(int, _DWORD, _DWORD, _DWORD, int, int, _DWORD, _DWORD, int, _DWORD))loc_26B478)(
                           a6,
                           HIDWORD(v24),
                           v31,
                           HIDWORD(v31),
                           a6,
                           v30,
                           v27,
                           HIDWORD(v27),
                           v12,
                           0);
          v26 = v23 - v10;
          if ( !(_DWORD)v24 )
            break;
          v26 = 1 - v10 + v23++;
        }
        while ( v19 > v23 );
        v28 = v26;
        v10 = v23;
        v22 = src[8];
      }
      v38 = v28;
      if ( v28 <= v22 )
      {
LABEL_31:
        ++v33;
        v10 = v34;
        sub_2669E8(v36, (int)off_46D5A4[0], v31, SHIDWORD(v31), a3, a4, v37, a6, src, (int)off_46D5A4[0]);
        sub_B7E3C();
      }
      else
      {
        sub_2669E8(v36, a3, v31, SHIDWORD(v31), a3, a4, v37, a6, src, (int)off_46D5A4[0]);
        sub_B7DF8(v38);
        sub_25A418(a4, " <repeats %u times>", v38);
        sub_B7E1C();
        v33 += src[8];
      }
      if ( v19 <= v10 )
        break;
      if ( src[7] <= v33 )
        goto LABEL_25;
    }
  }
LABEL_28:
  sub_B7E5C();
}
