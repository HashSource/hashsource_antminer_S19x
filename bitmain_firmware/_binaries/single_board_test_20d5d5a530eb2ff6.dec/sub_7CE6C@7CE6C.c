int __fastcall sub_7CE6C(int a1, int a2, const void *a3, size_t a4, int a5, size_t *a6)
{
  int v7; // r1
  bool v11; // zf
  int v12; // r7
  int result; // r0
  int v14; // r0
  _BYTE *v15; // r3
  _DWORD *v16; // r1
  _BYTE *v17; // r8
  _BYTE *v18; // r10
  int v19; // r0
  int v20; // r3
  int v21; // r11
  int v22; // r3
  int v23; // r2
  size_t v24; // r3
  void (__fastcall *v25)(int, _DWORD, int, _BYTE *, int, int, _DWORD); // r7
  size_t v26; // r7
  int v27; // r0
  int v28; // [sp+14h] [bp-40h]
  int v29; // [sp+18h] [bp-3Ch]
  int v30; // [sp+1Ch] [bp-38h]
  char v31[4]; // [sp+20h] [bp-34h] BYREF
  int v32; // [sp+24h] [bp-30h]
  size_t v33; // [sp+28h] [bp-2Ch]
  _BYTE *v34; // [sp+34h] [bp-20h]
  const void *v35; // [sp+38h] [bp-1Ch]

  v7 = *(_DWORD *)(a1 + 1672);
  if ( v7 )
  {
    sub_95494(a1, 80, 245, 68, "ssl/record/rec_layer_d1.c", 819);
    return 0;
  }
  if ( !*(_DWORD *)(*(_DWORD *)(a1 + 124) + 232)
    || (result = (*(int (**)(void))(*(_DWORD *)(a1 + 4) + 64))(), result > 0) )
  {
    v11 = a4 == 0;
    if ( !a4 )
      v11 = a5 == 0;
    v12 = v11;
    if ( v11 )
      return 0;
    if ( a4 > sub_8CD40(a1, v7, a3, a5) )
    {
      sub_95494(a1, 80, 245, 194, "ssl/record/rec_layer_d1.c", 836);
      return v12;
    }
    if ( *(_DWORD *)(a1 + 1140) && *(_DWORD *)(a1 + 1004) && sub_D8D8C(*(_DWORD *)(a1 + 1024)) )
    {
      v14 = sub_D8D8C(*(_DWORD *)(a1 + 1024));
      v28 = sub_D8C78(v14);
      if ( v28 < 0 )
      {
        sub_95494(a1, 80, 245, 194, "ssl/record/rec_layer_d1.c", 852);
        return -1;
      }
    }
    else
    {
      v28 = 0;
    }
    v15 = *(_BYTE **)(a1 + 1656);
    *v15 = a2;
    v16 = *(_DWORD **)(a1 + 4);
    v32 = a2;
    if ( *v16 != 0x1FFFF || *(_DWORD *)(a1 + 1272) == 256 )
    {
      v17 = v15 + 3;
      v15[1] = BYTE1(*(_DWORD *)a1);
      v15[2] = *(_DWORD *)a1;
    }
    else
    {
      v15[1] = -2;
      v17 = v15 + 3;
      v15[2] = -1;
    }
    v18 = v17 + 10;
    if ( !*(_DWORD *)(a1 + 1004) )
      goto LABEL_20;
    v19 = sub_D8920();
    v20 = sub_D8928(v19) & 0xF0007;
    if ( v20 == 2 )
    {
      v27 = sub_D8944(*(_DWORD *)(a1 + 1004));
      v30 = v27;
      if ( v27 <= 1 )
        goto LABEL_20;
      v21 = v27;
    }
    else
    {
      if ( (unsigned int)(v20 - 6) > 1 )
      {
LABEL_20:
        v21 = 0;
        v30 = 0;
        goto LABEL_21;
      }
      v21 = 8;
      v30 = 8;
    }
LABEL_21:
    v22 = *(_DWORD *)(a1 + 996);
    v33 = a4;
    v35 = a3;
    v34 = &v18[v21];
    if ( v22 )
    {
      if ( !sub_7F348(a1, v31) )
      {
        sub_95494(a1, 80, 245, 141, "ssl/record/rec_layer_d1.c", 912);
        return -1;
      }
    }
    else
    {
      memcpy(&v18[v21], a3, a4);
      v35 = v34;
    }
    v23 = v28;
    if ( v28 )
      v23 = 1;
    v29 = v23;
    if ( (v23 & ((**(_DWORD **)(a1 + 124) ^ 0x400u) >> 10)) != 0 )
    {
      if ( !(*(int (__fastcall **)(int, char *, _BYTE *, int))(*(_DWORD *)(*(_DWORD *)(a1 + 4) + 100) + 4))(
              a1,
              v31,
              &v18[v33 + v21],
              1) )
      {
        sub_95494(a1, 80, 245, 68, "ssl/record/rec_layer_d1.c", 932);
        return -1;
      }
      v33 += v28;
    }
    v34 = v17 + 10;
    v35 = v17 + 10;
    if ( v30 )
      v33 += v21;
    if ( (**(int (__fastcall ***)(int, char *, int))(*(_DWORD *)(a1 + 4) + 100))(a1, v31, 1) <= 0 )
    {
      if ( !sub_95D8C(a1) )
        sub_95494(a1, 80, 245, 68, "ssl/record/rec_layer_d1.c", 948);
    }
    else
    {
      if ( (v29 & (**(_DWORD **)(a1 + 124) >> 10)) == 0 )
      {
LABEL_30:
        *v17 = HIBYTE(*(_WORD *)(*(_DWORD *)(a1 + 3896) + 2));
        v17[1] = *(_WORD *)(*(_DWORD *)(a1 + 3896) + 2);
        *(_DWORD *)(v17 + 2) = *(_DWORD *)(a1 + 3882);
        *((_WORD *)v17 + 3) = *(_WORD *)(a1 + 3886);
        v17[8] = BYTE1(v33);
        v24 = v33;
        v17[9] = v33;
        v25 = *(void (__fastcall **)(int, _DWORD, int, _BYTE *, int, int, _DWORD))(a1 + 132);
        if ( v25 )
        {
          v25(1, 0, 256, v17 - 3, 13, a1, *(_DWORD *)(a1 + 136));
          v24 = v33;
        }
        v33 = v24 + 13;
        v32 = a2;
        sub_7EF30(a1 + 3880);
        if ( a5 )
        {
          *a6 = v33;
          return 1;
        }
        else
        {
          *(_DWORD *)(a1 + 3856) = a4;
          *(_DWORD *)(a1 + 3864) = a4;
          v26 = v33;
          *(_DWORD *)(a1 + 1668) = 0;
          *(_DWORD *)(a1 + 3868) = a3;
          *(_DWORD *)(a1 + 3860) = a2;
          *(_DWORD *)(a1 + 1672) = v26;
          return sub_7D810(a1, a2, a3, a4, a6);
        }
      }
      if ( (*(int (__fastcall **)(int, char *, _BYTE *, int))(*(_DWORD *)(*(_DWORD *)(a1 + 4) + 100) + 4))(
             a1,
             v31,
             &v18[v33],
             1) )
      {
        v33 += v28;
        goto LABEL_30;
      }
      sub_95494(a1, 80, 245, 68, "ssl/record/rec_layer_d1.c", 957);
    }
    return -1;
  }
  return result;
}
