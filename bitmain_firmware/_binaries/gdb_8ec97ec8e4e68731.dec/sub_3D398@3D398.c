_DWORD *__fastcall sub_3D398(_DWORD *a1, int a2, int a3, int *a4, int *a5)
{
  int v6; // r10
  int v9; // r1
  int v10; // r2
  int v11; // r11
  int v12; // r1
  int v13; // r2
  int v14; // r3
  int v15; // r0
  void *v16; // r1
  int v17; // r2
  int v18; // r3
  int v19; // r3
  int v20; // r1
  int v21; // r2
  int v22; // r0
  void *v23; // r3
  int v24; // r0
  const char *v26; // r4
  const char *v27; // r0
  void *v28; // [sp+Ch] [bp-28h]
  int v29; // [sp+14h] [bp-20h] BYREF
  int v30; // [sp+18h] [bp-1Ch]
  int v31; // [sp+1Ch] [bp-18h]
  int v32; // [sp+20h] [bp-14h] BYREF
  void *ptr; // [sp+24h] [bp-10h]
  int v34; // [sp+28h] [bp-Ch]
  int v35; // [sp+2Ch] [bp-8h]

  v6 = a3;
  if ( dword_46D538 )
    v6 = a3 + 1;
  if ( sub_23102C() )
  {
    sub_98F50(a1, a2);
  }
  else
  {
    v9 = dword_46BBD0;
    v10 = dword_46BBD4;
    *a1 = dword_46BBCC;
    a1[1] = v9;
    a1[2] = v10;
  }
  v11 = 0;
  if ( sub_3D0F4() )
    ++v6;
  do
  {
LABEL_7:
    v32 = 0;
    v12 = *a1;
    v13 = a1[1];
    v14 = a1[2];
    ptr = 0;
    v34 = 0;
    v35 = 0;
    v15 = sub_23090C(&v29, v12, v13, v14, &v32, 0);
    if ( a4 )
    {
      v15 = v32;
      v16 = ptr;
      v17 = v34;
      v18 = v35;
      *a4 = v32;
      a4[1] = (int)v16;
      a4[2] = v17;
      a4[3] = v18;
    }
    v19 = v32;
    if ( a5 )
    {
      v15 = v29;
      v20 = v30;
      v21 = v31;
      *a5 = v29;
      a5[1] = v20;
      a5[2] = v21;
    }
  }
  while ( v19 == 11 );
  switch ( v19 )
  {
    case 0:
      sub_22EFF4(v15);
      ((void (__fastcall *)(int, int, int))loc_230B18)(v29, v30, v31);
      if ( ptr )
        sub_946E0("During startup program exited with code %d.", ptr);
      sub_946E0("During startup program exited normally.");
    case 1:
      v28 = ptr;
      v22 = sub_23F9F0(v29, v30, v31);
      v23 = v28;
      if ( v28 != (void *)5 )
        goto LABEL_19;
      if ( !v11 )
      {
LABEL_22:
        v24 = sub_22EF54(v22);
        sub_22EF7C(v24);
      }
LABEL_16:
      if ( --v6 )
      {
        v11 = 1;
        sub_23200C(*a1, a1[1], a1[2]);
        goto LABEL_7;
      }
      return a1;
    case 2:
      sub_22EFF4(v15);
      ((void (__fastcall *)(int, int, int))loc_230B18)(v29, v30, v31);
      v26 = (const char *)sub_99A4C(ptr);
      v27 = (const char *)sub_99A28(ptr);
      sub_946E0("During startup program terminated with signal %s, %s.", v26, v27);
    case 3:
    case 4:
    case 5:
    case 8:
    case 9:
    case 10:
      sub_23F9F0(v29, v30, v31);
      v23 = 0;
      goto LABEL_19;
    case 6:
      if ( ptr )
        free(ptr);
      v22 = sub_23F9F0(v29, v30, v31);
      if ( v11 )
        goto LABEL_16;
      goto LABEL_22;
    default:
      v23 = 0;
LABEL_19:
      sub_232038(*a1, a1[1], a1[2], v23);
      goto LABEL_7;
  }
}
