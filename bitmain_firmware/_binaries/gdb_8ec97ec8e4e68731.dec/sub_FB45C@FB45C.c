void __fastcall sub_FB45C(int a1, int a2, const char *a3, size_t a4, int a5, const char *a6, int a7)
{
  size_t v8; // r10
  int v11; // r3
  int v12; // r0
  int v13; // r1
  int v14; // r2
  int v15; // r0
  int v16; // r9
  size_t n; // r7
  int v18; // r3
  _BYTE *v19; // r3
  int v20; // r2
  __int64 v21; // r0
  char dest[4]; // [sp+10h] [bp-6Ch] BYREF
  size_t v23; // [sp+14h] [bp-68h]
  int v24; // [sp+18h] [bp-64h]
  int v25; // [sp+1Ch] [bp-60h]
  int v26; // [sp+20h] [bp-5Ch]
  void *v27; // [sp+24h] [bp-58h] BYREF
  _QWORD v28[2]; // [sp+28h] [bp-54h] BYREF
  const char *v29; // [sp+3Ch] [bp-40h]
  void *ptr; // [sp+40h] [bp-3Ch] BYREF
  _QWORD v31[3]; // [sp+44h] [bp-38h] BYREF

  v8 = a4;
  if ( a2 )
    a4 = *(_DWORD *)(a2 + 12);
  if ( a2 )
    a4 &= 1u;
  else
    v23 = 0;
  if ( a2 )
    v23 = a4;
  v11 = a1 + 20;
  v12 = *(_DWORD *)(a1 + 20);
  v13 = *(_DWORD *)(v11 + 4);
  v14 = *(_DWORD *)(v11 + 8);
  ptr = (char *)v31 + 4;
  LODWORD(v31[0]) = 0;
  v24 = v12;
  v25 = v13;
  v26 = v14;
  BYTE4(v31[0]) = 0;
  if ( !v13 )
  {
    v29 = a3;
    goto LABEL_11;
  }
  sub_931D8((char **)&v27, "%s/%ld", a3, v13);
  v19 = ptr;
  if ( v27 == (char *)v28 + 4 )
  {
    sub_33B48C(&ptr, &v27);
    v19 = v27;
    goto LABEL_29;
  }
  if ( ptr == (char *)v31 + 4 )
  {
    ptr = v27;
    v31[0] = v28[0];
    goto LABEL_35;
  }
  ptr = v27;
  v20 = HIDWORD(v31[0]);
  v31[0] = v28[0];
  if ( !v19 )
  {
LABEL_35:
    v27 = (char *)v28 + 4;
    v19 = (char *)v28 + 4;
    goto LABEL_29;
  }
  v27 = v19;
  HIDWORD(v28[0]) = v20;
LABEL_29:
  LODWORD(v28[0]) = 0;
  *v19 = 0;
  if ( v27 != (char *)v28 + 4 )
    sub_339E64(v27);
  a3 = (const char *)ptr;
  v29 = (const char *)ptr;
LABEL_11:
  v15 = sub_2AD7AC(dword_47ACB8, a3);
  v16 = v15;
  if ( v15 )
  {
    n = *(_DWORD *)(v15 + 36);
    if ( v8 > n )
    {
      sub_946B0("Section `%s' in core file too small.", v29);
    }
    else
    {
      if ( v8 == n )
        v18 = 0;
      else
        v18 = v23 ^ 1;
      if ( v18 )
        sub_946B0("Unexpected size of section `%s' in core file.", v29);
      if ( sub_2ADEDC(dword_47ACB8, v16, dest, 0, 0, 0, n) )
      {
        if ( a2 )
        {
          (*(void (__fastcall **)(int, int, int, char *, size_t))(a2 + 4))(a2, a1, -1, dest, n);
        }
        else
        {
          if ( !dword_47AD04 )
          {
            v21 = sub_94700(
                    (int)"corelow.c",
                    548,
                    "%s: Assertion `%s' failed.",
                    "void get_core_register_section(regcache*, const regset*, const char*, int, int, const char*, int)",
                    "core_vec");
            sub_FB6EC(v21, HIDWORD(v21));
            return;
          }
          (*(void (__fastcall **)(int, char *, size_t, int, _DWORD))(dword_47AD04 + 12))(
            a1,
            dest,
            n,
            a5,
            *(_DWORD *)(v16 + 28));
        }
      }
      else
      {
        sub_946B0("Couldn't read %s registers from `%s' section in core file.", a6, v29);
      }
    }
  }
  else if ( a7 )
  {
    sub_946B0("Couldn't find %s registers in core file.", a6);
  }
  if ( ptr != (char *)v31 + 4 )
    sub_339E64(ptr);
}
