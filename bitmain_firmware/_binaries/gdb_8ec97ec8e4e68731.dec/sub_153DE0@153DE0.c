void __fastcall sub_153DE0(char *a1)
{
  void *v2; // r0
  size_t v3; // r0
  int v4; // r4
  void *v5; // r4
  _DWORD *v6; // r0
  int v7; // r0
  _DWORD *v8; // r0
  int v9; // r3
  int v10; // r0
  int v11; // r0
  const char *v12; // r0
  char *v13; // r8
  int *v14; // r7
  int *v15; // r10
  size_t v16; // r2
  int v17; // r0
  int v18; // r1
  int v19; // r12
  void *v20; // r3
  int *v21; // lr
  bool v22; // zf
  int v23; // r2
  int v24; // r2
  size_t v25; // r2
  int v26; // r0
  int v27; // r1
  int v28; // r12
  void *v29; // r3
  int *v30; // lr
  bool v31; // zf
  int v32; // r2
  int v33; // r2
  _DWORD *v34; // r0
  _BYTE *v35; // r3
  int v36; // r2
  int v37; // r2
  void *v38; // r0
  int s; // [sp+Ch] [bp-7Ch] BYREF
  char v40[8]; // [sp+10h] [bp-78h] BYREF
  int v41; // [sp+18h] [bp-70h] BYREF
  char v42[12]; // [sp+1Ch] [bp-6Ch] BYREF
  void *ptr; // [sp+28h] [bp-60h] BYREF
  int v44; // [sp+2Ch] [bp-5Ch]
  _DWORD v45[4]; // [sp+30h] [bp-58h] BYREF
  void *v46; // [sp+40h] [bp-48h] BYREF
  int v47; // [sp+44h] [bp-44h]
  _DWORD v48[4]; // [sp+48h] [bp-40h] BYREF
  void *v49[2]; // [sp+58h] [bp-30h] BYREF
  _BYTE v50[16]; // [sp+60h] [bp-28h] BYREF
  void *v51; // [sp+70h] [bp-18h] BYREF
  int v52; // [sp+74h] [bp-14h]
  _DWORD v53[4]; // [sp+78h] [bp-10h] BYREF

  ptr = v45;
  v44 = 0;
  LOBYTE(v45[0]) = 0;
  sub_B7E7C();
  v2 = (void *)sub_57D58();
  if ( a1 )
  {
    v3 = strlen(a1);
    v2 = (void *)sub_33BC54((int)&ptr, 0, v44, a1, v3);
    v4 = dword_487668;
    goto LABEL_3;
  }
  v4 = dword_487668;
  v9 = *(_DWORD *)(dword_487668 + 68);
  if ( v9 == 2 )
  {
    sub_94700((int)"event-top.c", 370, "double prompt");
    v38 = ptr;
    if ( ptr != v45 )
      sub_339E64(ptr);
    sub_338FFC(v38);
  }
  if ( v9 )
  {
    if ( v9 != 1 )
    {
LABEL_3:
      if ( *(_DWORD *)(v4 + 28) )
      {
        sub_153BC4();
        ((void (__fastcall *)(void *))loc_153CE8)(ptr);
      }
      else
      {
        v5 = ptr;
        v6 = (_DWORD *)sub_242F8C(v2);
        v7 = sub_256850(v5, *v6);
        v8 = (_DWORD *)sub_242F8C(v7);
        sub_25680C(*v8);
      }
      goto LABEL_5;
    }
    v10 = sub_2445C4(v2);
    v11 = sub_1BA428(v10);
    v12 = (const char *)sub_2445C4(v11);
    v13 = (char *)v12;
    if ( dword_48968C <= 1 )
    {
      v46 = v48;
      if ( v12 )
        v37 = (int)&v12[strlen(v12)];
      else
        v37 = -1;
      sub_153B14(&v46, v13, v37);
    }
    else
    {
      v14 = (int *)&unk_3A6D98;
      v49[0] = v50;
      v41 = 1880758794;
      strcpy(v42, "re-prompt\n");
      v15 = 0;
      s = 1880758794;
      strcpy(v40, "rompt\n");
      sub_153B14(v49, &v41, (int)&v42[10]);
      v16 = strlen(v13);
      if ( 0x7FFFFFFF - (unsigned int)v49[1] < v16 )
        sub_33D184("basic_string::append");
      v17 = sub_33C320(v49, v13, v16);
      v51 = v53;
      v19 = v17;
      v21 = (int *)(v17 + 8);
      v20 = *(void **)v17;
      v22 = *(_DWORD *)v17 == v17 + 8;
      if ( *(_DWORD *)v17 == v17 + 8 )
      {
        v17 = *v21;
        v14 = v53;
        v18 = v21[1];
        v23 = v21[2];
        v20 = (void *)v21[3];
      }
      else
      {
        v23 = *(_DWORD *)(v17 + 8);
        v51 = *(void **)v17;
      }
      if ( v22 )
      {
        *v14 = v17;
        v14[1] = v18;
        v14[2] = v23;
        v14[3] = (int)v20;
      }
      else
      {
        v53[0] = v23;
      }
      v24 = *(_DWORD *)(v19 + 4);
      *(_BYTE *)(v19 + 8) = 0;
      v52 = v24;
      *(_DWORD *)(v19 + 4) = 0;
      *(_DWORD *)v19 = v21;
      v25 = strlen((const char *)&s);
      if ( 0x7FFFFFFF - v52 < v25 )
        sub_33D184("basic_string::append");
      v26 = sub_33C320(&v51, &s, v25);
      v46 = v48;
      v28 = v26;
      v30 = (int *)(v26 + 8);
      v29 = *(void **)v26;
      v31 = *(_DWORD *)v26 == v26 + 8;
      if ( *(_DWORD *)v26 == v26 + 8 )
      {
        v26 = *v30;
        v15 = v48;
        v32 = v30[2];
        v29 = (void *)v30[3];
        v27 = v30[1];
      }
      else
      {
        v32 = *(_DWORD *)(v26 + 8);
        v46 = *(void **)v26;
      }
      if ( v31 )
      {
        *v15 = v26;
        v15[1] = v27;
        v15[2] = v32;
        v15[3] = (int)v29;
      }
      else
      {
        v48[0] = v32;
      }
      v33 = *(_DWORD *)(v28 + 4);
      *(_BYTE *)(v28 + 8) = 0;
      v47 = v33;
      *(_DWORD *)v28 = v30;
      v34 = v51;
      *(_DWORD *)(v28 + 4) = 0;
      if ( v34 != v53 )
        sub_339E64(v34);
      if ( v49[0] != v50 )
        sub_339E64(v49[0]);
    }
    v35 = ptr;
    if ( v46 == v48 )
    {
      sub_33B48C(&ptr, &v46);
      v35 = v46;
      goto LABEL_37;
    }
    if ( ptr == v45 )
    {
      ptr = v46;
      v44 = v47;
      v45[0] = v48[0];
    }
    else
    {
      ptr = v46;
      v44 = v47;
      v36 = v45[0];
      v45[0] = v48[0];
      if ( v35 )
      {
        v46 = v35;
        v48[0] = v36;
LABEL_37:
        v47 = 0;
        *v35 = 0;
        v2 = v46;
        if ( v46 != v48 )
          sub_339E64(v46);
        *(_DWORD *)(v4 + 68) = 2;
        v4 = dword_487668;
        goto LABEL_3;
      }
    }
    v46 = v48;
    v35 = v48;
    goto LABEL_37;
  }
  if ( *(_DWORD *)(dword_487668 + 28) )
    sub_153BC4();
LABEL_5:
  if ( ptr != v45 )
    sub_339E64(ptr);
}
