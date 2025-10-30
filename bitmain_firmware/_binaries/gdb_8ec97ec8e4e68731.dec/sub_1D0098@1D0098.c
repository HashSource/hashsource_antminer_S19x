int __fastcall sub_1D0098(int a1, _DWORD *a2, char *s, int a4, int a5)
{
  int v6; // r4
  char *v10; // r7
  size_t v11; // r0
  _BYTE *v12; // r0
  void *v13; // r2
  int v14; // r1
  int v15; // r3
  int v16; // r4
  unsigned int v17; // r8
  unsigned int v18; // r9
  char *v19; // r4
  char *v20; // r5
  char *v21; // r6
  int v22; // r0
  char *v23; // r4
  int v24; // r0
  int *v25; // r5
  int v26; // r0
  int *v27; // r4
  int *v29; // r5
  int *v30; // r4
  int *v31; // r6
  int v32; // t1
  int v33; // r0
  __int64 v34; // r0
  _DWORD v35[2]; // [sp+0h] [bp-FCh] BYREF
  _DWORD v36[4]; // [sp+8h] [bp-F4h] BYREF
  char *sa; // [sp+18h] [bp-E4h] BYREF
  char v38; // [sp+1Ch] [bp-E0h]
  char v39; // [sp+1Dh] [bp-DFh]
  void *ptr; // [sp+20h] [bp-DCh]
  int v41; // [sp+24h] [bp-D8h]
  _DWORD v42[4]; // [sp+28h] [bp-D4h] BYREF
  void *v43; // [sp+38h] [bp-C4h]
  char v44; // [sp+40h] [bp-BCh] BYREF
  char v45; // [sp+54h] [bp-A8h]
  void *v46; // [sp+58h] [bp-A4h]
  char v47; // [sp+60h] [bp-9Ch] BYREF
  char v48; // [sp+70h] [bp-8Ch]
  void *v49; // [sp+74h] [bp-88h]
  char v50; // [sp+7Ch] [bp-80h] BYREF
  char v51; // [sp+8Ch] [bp-70h]
  void *v52; // [sp+90h] [bp-6Ch]
  char v53; // [sp+98h] [bp-64h] BYREF
  char v54; // [sp+A8h] [bp-54h]
  int v55; // [sp+E8h] [bp-14h]
  int v56; // [sp+ECh] [bp-10h]
  _DWORD v57[3]; // [sp+F0h] [bp-Ch]

  if ( a4 )
    v6 = a2[10];
  else
    v6 = a2[12];
  if ( !v6 )
    return v6;
  if ( off_46D5A4[0][2] == (char *)4 && strchr(s, 40) && (sub_100138(&sa, (int)s), (v10 = sa) != 0) )
  {
    v35[0] = v36;
  }
  else
  {
    v10 = (char *)sub_327254(s);
    v35[0] = v36;
  }
  v11 = strlen(v10);
  v12 = sub_1CF018(v35, v10, (int)&v10[v11]);
  v13 = (void *)v35[0];
  v14 = 1;
  v38 = 0;
  v39 = 0;
  sa = (char *)1;
  if ( (_DWORD *)v35[0] == v36 )
  {
    v12 = (_BYTE *)v36[0];
    v14 = v36[1];
    v13 = (void *)v36[2];
    v15 = v36[3];
  }
  else
  {
    v15 = v36[0];
  }
  ptr = v42;
  if ( (_DWORD *)v35[0] == v36 )
  {
    v42[0] = v12;
    v42[1] = v14;
    v42[2] = v13;
    v42[3] = v15;
  }
  else
  {
    v42[0] = v15;
  }
  if ( (_DWORD *)v35[0] != v36 )
    ptr = v13;
  v57[0] = 0;
  v45 = 0;
  v48 = 0;
  v51 = 0;
  v54 = 0;
  v55 = 0;
  v56 = 0;
  *(_DWORD *)((char *)v57 + 3) = 0;
  v41 = v35[1];
  if ( !a4 )
  {
    v29 = (int *)(*(_DWORD *)(a1 + 120) + 4 * a2[11]);
    v30 = &v29[v6];
    if ( v29 >= v30 )
    {
      v6 = 0;
LABEL_40:
      if ( v48 )
      {
        v48 = 0;
        if ( v46 != &v47 )
          sub_339E64(v46);
      }
      if ( v45 )
      {
        v45 = 0;
        if ( v43 != &v44 )
          sub_339E64(v43);
      }
      if ( ptr != v42 )
        sub_339E64(ptr);
      free(v10);
      return v6;
    }
    while ( 1 )
    {
      v31 = v29;
      v32 = *v29++;
      if ( sub_21D9B0(*(_BYTE *)(v32 + 20) & 0x1F, *(_BYTE *)(v32 + 24) & 7, a5) )
      {
        if ( sub_21B7F8(*(v29 - 1)) )
          break;
      }
      if ( v30 <= v29 )
        goto LABEL_37;
    }
    v6 = *v31;
LABEL_38:
    if ( v54 )
    {
      v54 = 0;
      if ( v52 != &v53 )
        sub_339E64(v52);
    }
    if ( v51 )
    {
      v51 = 0;
      if ( v49 != &v50 )
        sub_339E64(v49);
    }
    goto LABEL_40;
  }
  v16 = 4 * (v6 + 0x3FFFFFFF);
  v17 = *(_DWORD *)(a1 + 108) + 4 * a2[9];
  v18 = v17 + v16;
  if ( v17 >= v17 + v16 )
  {
    if ( v17 == v17 + v16 )
    {
      v20 = (char *)v17;
      goto LABEL_29;
    }
  }
  else
  {
    v19 = (char *)(v17 + 4 * ((int)((v16 >> 2) + ((unsigned int)v16 >> 31)) >> 1));
    if ( v18 <= (unsigned int)v19 )
    {
LABEL_64:
      sub_94700((int)"psymtab.c", 719, "failed internal consistency check");
      sub_AF570((int)&sa);
      free(v10);
      sub_338FFC(v33);
    }
    v20 = (char *)v17;
    v21 = (char *)v18;
    while ( 1 )
    {
      v22 = sub_21B7DC(*(_DWORD *)v19);
      if ( sub_25A8B8(v22, v10) >= 0 )
        v21 = v19;
      else
        v20 = v19 + 4;
      if ( v20 >= v21 )
        break;
      v19 = &v20[4 * ((int)(((v21 - v20) >> 2) + ((unsigned int)(v21 - v20) >> 31)) >> 1)];
      if ( v19 >= v21 )
        goto LABEL_64;
    }
    if ( v20 == v21 )
    {
      if ( v17 > (unsigned int)v20 )
      {
LABEL_32:
        v25 = (int *)(v20 + 4);
        while ( v18 >= (unsigned int)v25 )
        {
          v26 = *v25;
          v27 = v25++;
          if ( !sub_21B7F8(v26) )
            break;
          if ( sub_21D9B0(*(_BYTE *)(*(v25 - 1) + 20) & 0x1F, *(_BYTE *)(*(v25 - 1) + 24) & 7, a5) )
          {
            v6 = *v27;
            goto LABEL_38;
          }
        }
LABEL_37:
        v6 = 0;
        goto LABEL_38;
      }
LABEL_29:
      v23 = v20;
      do
      {
        v24 = *(_DWORD *)v23;
        v20 = v23;
        v23 -= 4;
        if ( !sub_21B7F8(v24) )
          break;
        v20 = v23;
      }
      while ( v17 <= (unsigned int)v23 );
      goto LABEL_32;
    }
  }
  v34 = sub_94700((int)"psymtab.c", 732, "failed internal consistency check");
  return sub_1D047C(v34, HIDWORD(v34));
}
