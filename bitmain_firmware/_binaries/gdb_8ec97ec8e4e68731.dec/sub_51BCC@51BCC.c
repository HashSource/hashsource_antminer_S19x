void __fastcall sub_51BCC(const char *a1)
{
  void *v2; // r0
  unsigned int v3; // r3
  _BYTE *v4; // r6
  int v5; // r5
  char *v6; // r0
  const char *v7; // r4
  const char *v8; // r0
  void *v9; // r4
  int v10; // r0
  int v11; // r5
  int v12; // r7
  int v13; // r8
  const char **v14; // r9
  const char *v15; // r7
  const char *v16; // r8
  const char *v17; // r0
  const char *v18; // r7
  const char *v19; // r0
  int v20; // r0
  const char *v21; // r0
  const char *v22; // [sp+8h] [bp-3Ch] BYREF
  _DWORD v23[3]; // [sp+Ch] [bp-38h] BYREF
  void *ptr; // [sp+18h] [bp-2Ch] BYREF
  _BYTE *v25; // [sp+1Ch] [bp-28h]
  int v26; // [sp+28h] [bp-1Ch]

  if ( !a1 )
  {
    sub_20324C();
    v10 = sub_203210(&ptr);
    v4 = v25;
    v11 = v26;
    if ( !v25 )
      sub_946E0("No default source file yet.");
    v5 = v11 + sub_203200(v10) / 2;
    goto LABEL_11;
  }
  v22 = a1;
  sub_19DBE0(v23, &v22, off_46D5A4[0], 0);
  sub_19B938(&ptr, v23[0], 2, 0, 0, 0);
  sub_50F98((int *)&ptr);
  v2 = ptr;
  if ( v25 != ptr )
  {
    v3 = -858993459 * ((v25 - (_BYTE *)ptr) >> 3);
    if ( v3 <= 1 )
    {
      v4 = (_BYTE *)*((_DWORD *)ptr + 1);
      v5 = *((_DWORD *)ptr + 4);
      if ( *v22 )
        sub_946E0("Junk at end of line specification.");
      if ( *a1 == 42 )
      {
        v12 = *((_DWORD *)ptr + 5);
        if ( !v4 )
        {
          v20 = sub_B894C();
          v21 = (const char *)sub_25AC8C(v20, v12);
          sub_946E0("No source file for address %s.", v21);
        }
        v13 = sub_1B7250(*(_DWORD *)(*((_DWORD *)v4 + 1) + 4));
        v14 = (const char **)sub_C3460(v12);
        if ( v14 )
        {
          v15 = (const char *)sub_25AC8C(v13, v12);
          if ( dword_46D448 )
            v16 = (const char *)sub_21B3C4(v14);
          else
            v16 = *v14;
          v17 = (const char *)((int (__fastcall *)(_BYTE *))loc_2043D4)(v4);
          sub_259F10("%s is in %s (%s:%d).\n", v15, v16, v17, v5);
        }
        else
        {
          v18 = (const char *)sub_25AC8C(v13, v12);
          v19 = (const char *)((int (__fastcall *)(_BYTE *))loc_2043D4)(v4);
          sub_259F10("%s is at %s:%d.\n", v18, v19, v5);
        }
      }
      if ( !v4 )
        sub_946E0("No line number known for %s.", a1);
      if ( ptr )
        sub_339E64(ptr);
      if ( v23[0] )
        ((void (__fastcall *)(_DWORD *))loc_19D154)(v23);
LABEL_11:
      v6 = getenv("EDITOR");
      if ( v6 )
        v7 = v6;
      else
        v7 = "/bin/ex";
      v8 = (const char *)sub_204308(v4);
      v9 = (void *)sub_93140("%s +%d \"%s\"", v7, v5, v8);
      sub_4FB50((int)v9);
      if ( v9 )
        free(v9);
      return;
    }
    v23[1] = ptr;
    v23[2] = -858993459 * ((v25 - (_BYTE *)ptr) >> 3);
    sub_4F880(ptr, v3, (int)"Specified line is ambiguous:\n");
    v2 = ptr;
  }
  if ( v2 )
    sub_339E64(v2);
  if ( v23[0] )
    ((void (__fastcall *)(_DWORD *))loc_19D154)(v23);
}
