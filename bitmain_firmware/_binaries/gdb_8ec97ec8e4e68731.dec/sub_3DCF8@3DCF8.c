__pid_t __fastcall sub_3DCF8(
        const char *a1,
        _DWORD *a2,
        int a3,
        int (__fastcall *a4)(int),
        void (__fastcall *a5)(__pid_t),
        void (*a6)(void),
        int a7,
        void (__fastcall *a8)(char *, char **))
{
  const char *v8; // r7
  int v10; // r4
  int v11; // r0
  _BYTE *v12; // r3
  int v13; // r2
  __pid_t v14; // r0
  __pid_t v15; // r4
  int v16; // r0
  int v17; // r0
  char **v18; // r4
  char *v19; // r0
  int v20; // r6
  const char *v21; // r1
  char **v22; // r4
  const char *v23; // t1
  const char *v24; // r0
  char *v26; // r0
  _DWORD *v27; // r3
  char *path; // [sp+0h] [bp-6Ch]
  int v29; // [sp+4h] [bp-68h]
  void *v32; // [sp+14h] [bp-58h] BYREF
  int v33; // [sp+18h] [bp-54h]
  _DWORD v34[4]; // [sp+1Ch] [bp-50h] BYREF
  void *ptr; // [sp+2Ch] [bp-40h] BYREF
  int v36; // [sp+30h] [bp-3Ch]
  _DWORD v37[4]; // [sp+34h] [bp-38h] BYREF
  char **argv; // [sp+44h] [bp-28h] BYREF
  void *v39; // [sp+50h] [bp-1Ch]
  char v40; // [sp+58h] [bp-14h] BYREF

  v8 = a1;
  v32 = v34;
  v33 = 0;
  LOBYTE(v34[0]) = 0;
  v10 = a7;
  if ( !a1 )
    v8 = (const char *)sub_FA624(1);
  if ( dword_46D538 )
  {
    if ( !a7 )
    {
      v26 = getenv("SHELL");
      v10 = (int)v26;
      LOWORD(v27) = (unsigned __int16)&dword_471BAC;
      if ( !v26 )
        v10 = 59100;
      HIWORD(v27) = (unsigned int)&dword_471BAC >> 16;
      if ( !v26 )
        HIWORD(v10) = 52;
      *v27 = v26;
      if ( !v26 )
        *v27 = v10;
    }
  }
  else
  {
    v10 = 0;
  }
  sub_3DC8C((int)&argv, v8, a2, (const char *)v10);
  v29 = _environ;
  sub_3D12C();
  v11 = sub_3D104();
  path = (char *)sub_17FCD4(v11);
  if ( path )
  {
    sub_97FB0(&ptr, path);
    v12 = v32;
    if ( ptr != v37 )
    {
      if ( v32 == v34 )
      {
        v32 = ptr;
        v33 = v36;
        v34[0] = v37[0];
      }
      else
      {
        v32 = ptr;
        v33 = v36;
        v13 = v34[0];
        v34[0] = v37[0];
        if ( v12 )
        {
          ptr = v12;
          v37[0] = v13;
LABEL_11:
          v36 = 0;
          *v12 = 0;
          if ( ptr != v37 )
            sub_339E64(ptr);
          path = (char *)v32;
          goto LABEL_14;
        }
      }
      v12 = v37;
      ptr = v37;
      goto LABEL_11;
    }
    sub_33B48C(&v32, &ptr);
    v12 = ptr;
    goto LABEL_11;
  }
LABEL_14:
  if ( a6 )
  {
    a6();
    v14 = fork();
  }
  else
  {
    v14 = vfork();
  }
  v15 = v14;
  if ( v14 < 0 )
    sub_258B04("vfork");
  if ( !v14 )
  {
    sub_967A8(0);
    if ( !path || chdir(path) >= 0 )
    {
      v16 = sub_3D240();
      v17 = a4(v16);
      sub_99E38(v17);
      v18 = argv;
      _environ = a3;
      v19 = *argv;
      if ( a8 )
        a8(v19, argv);
      else
        execvp(v19, argv);
      v20 = *_errno_location();
      sub_946B0("Cannot exec %s", *v18);
      v21 = v18[1];
      if ( v21 )
      {
        v22 = v18 + 1;
        do
        {
          sub_946B0(" %s", v21);
          v23 = v22[1];
          ++v22;
          v21 = v23;
        }
        while ( v23 );
      }
      v24 = (const char *)sub_6FF98(v20);
      sub_946B0("Error: %s\n", v24);
      exit(127);
    }
    sub_3D5C8(path);
  }
  _environ = v29;
  ((void (__fastcall *)(__pid_t))loc_3D194)(v14);
  if ( a5 )
    a5(v15);
  if ( v39 != &v40 )
    sub_339E64(v39);
  if ( argv )
    sub_339E64(argv);
  if ( v32 != v34 )
    sub_339E64(v32);
  return v15;
}
