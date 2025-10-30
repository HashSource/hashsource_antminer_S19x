void __fastcall sub_2045F4(int a1, int a2, int a3, int a4)
{
  int v7; // r6
  int v8; // r5
  int v9; // r4
  FILE *v10; // r5
  int v11; // r4
  int v12; // r3
  int v13; // r0
  int v14; // r2
  int v15; // r3
  int v16; // r2
  int v17; // r3
  int v18; // r2
  int v19; // r3
  int v20; // r2
  bool v21; // zf
  _BOOL4 v22; // r3
  int v23; // r2
  int v24; // r3
  int v25; // r0
  char *v26; // r4
  size_t v27; // r0
  void *v28; // r0
  int v29; // r2
  int v30; // r3
  const char *v31; // r5
  size_t v32; // r0
  int *v33; // r0
  int v34; // r4
  int v35; // r2
  int v36; // r3
  const char *v37; // r0
  int v38; // r0
  char dest[4]; // [sp+1068h] [bp-54h] BYREF
  char *v40; // [sp+106Ch] [bp-50h]
  const char *v41; // [sp+1070h] [bp-4Ch]
  int v42; // [sp+1074h] [bp-48h]
  int v43; // [sp+1078h] [bp-44h]
  int v44; // [sp+107Ch] [bp-40h]
  char v45[24]; // [sp+1084h] [bp-38h] BYREF

  v43 = a4;
  v42 = a1;
  v7 = *(_DWORD *)sub_242FDC(a1);
  dword_4893EC = a1;
  dword_4893FC = a2;
  dword_489400 = a2;
  if ( !sub_2573E4(v7, 1) )
  {
    v8 = dword_48940C;
    v43 |= 1u;
    goto LABEL_31;
  }
  if ( dword_489408 != a1 || (v8 = dword_48940C) == 0 )
  {
    dword_489408 = v42;
    if ( v42 )
    {
      v8 = sub_204098(
             *(const char **)(v42 + 12),
             *(const char **)(*(_DWORD *)(v42 + 4) + 28),
             (const char **)(v42 + 28));
      goto LABEL_5;
    }
    v8 = -1;
LABEL_31:
    dword_48940C = v8;
    if ( (v43 & 1) != 0 )
    {
      sub_257504(v7, "line", a2);
      sub_257380(v7, "\tin ", v23, v24);
      if ( sub_2573F0(v7) || sub_2573E4(v7, 1) )
      {
        v25 = ((int (__fastcall *)(int))loc_2043D4)(v42);
        sub_2575E8(v7, "file", v25);
      }
      if ( sub_2573F0(v7) || !sub_2573E4(v7, 1) )
      {
        v26 = sub_204308(v42);
        v27 = strlen(v26);
        v28 = memcpy(dest, v26, v27 + 1);
        sub_2575E8(v7, "fullname", v28);
      }
      sub_257380(v7, &word_356638, v29, v30);
    }
    else
    {
      v31 = (const char *)((int (__fastcall *)(int))loc_2043D4)(v42);
      v32 = strlen(v31);
      sub_93170(dest, v32 + 100, aD_24, a2, v31);
      v33 = _errno_location();
      sub_259504(dest, *v33);
    }
    return;
  }
  v43 |= 1u;
LABEL_5:
  if ( v8 < 0 )
    goto LABEL_31;
  dword_48940C = 0;
  if ( !*(_DWORD *)(v42 + 20) )
    ((void (__fastcall *)(int, int))loc_204438)(v42, v8);
  if ( a2 <= 0 || *(_DWORD *)(v42 + 16) < a2 )
  {
    close(v8);
    v37 = (const char *)((int (__fastcall *)(int))loc_2043D4)(v42);
    sub_946E0("Line number %d out of range; %s has %d lines.", a2, v37, *(_DWORD *)(v42 + 16));
  }
  if ( (((unsigned __int64)lseek64(v8) >> 32) & 0x80000000) != 0LL )
  {
    close(v8);
    v38 = ((int (__fastcall *)(int))loc_2043D4)(v42);
    sub_258B04(v38);
  }
  v9 = a3 - a2;
  v10 = fdopen(v8, "rb");
  clearerr(v10);
  v44 = v9 - 1;
  if ( v9 > 0 )
  {
    v40 = ":";
    v41 = "%d\t";
    do
    {
      v11 = fgetc(v10);
      if ( v11 == -1 )
        break;
      v12 = dword_4893FC;
      dword_489404 = dword_4893FC;
      if ( (v43 & 2) != 0 )
      {
        v13 = ((int (__fastcall *)(int))loc_2043D4)(v42);
        sub_257380(v7, v13, v14, v15);
        sub_257380(v7, v40, v16, v17);
        v12 = dword_4893FC;
      }
      dword_4893FC = v12 + 1;
      sub_93170(v45, 0x14u, v41);
      sub_257380(v7, v45, v18, v19);
      do
      {
        v22 = v11 <= 31;
        if ( v11 == 9 )
          v22 = 0;
        if ( v22 )
        {
          v21 = v11 == 10;
          if ( v11 != 10 )
            v21 = v11 == 13;
          if ( !v21 )
          {
            sub_93170(v45, 0x14u, "^%c", v11 + 64);
            goto LABEL_23;
          }
        }
        else if ( v11 == 127 )
        {
          sub_257380(v7, "^?", v20, 0);
          goto LABEL_24;
        }
        if ( v11 == 13 )
        {
          v34 = fgetc(v10);
          if ( v34 == 10 || (sub_259F10("^%c", 77), v34 != -1) )
            ungetc(v34, v10);
          goto LABEL_24;
        }
        sub_93170(v45, 0x14u, "%c", v11);
LABEL_23:
        sub_257380(v7, v45, v35, v36);
        if ( v11 == 10 )
          break;
LABEL_24:
        v11 = fgetc(v10);
      }
      while ( v11 >= 0 );
      v21 = v44-- == 0;
    }
    while ( !v21 );
  }
  if ( v10 )
    fclose(v10);
}
