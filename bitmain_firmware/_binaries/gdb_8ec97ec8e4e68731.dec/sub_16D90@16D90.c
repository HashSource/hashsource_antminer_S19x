void __fastcall __noreturn sub_16D90(const char *a1, const char *a2, const char *a3, int a4)
{
  size_t v8; // r0
  unsigned int v9; // r8
  unsigned int v10; // r4
  size_t v11; // r0
  unsigned int v12; // r4
  unsigned int v13; // r4
  size_t v14; // r0
  unsigned int v15; // r4
  unsigned int v16; // r4
  const void *v17; // r6
  const char *v18; // r0
  size_t v19; // r0
  unsigned int v20; // r4
  int v21; // r0

  v8 = strlen(a1);
  v9 = write(2, a1, v8);
  v10 = (unsigned int)write(2, ": error trying to exec '", 0x18u) >> 31;
  v11 = strlen(a2);
  v12 = v10 | (v9 >> 31) | ((unsigned int)write(2, a2, v11) >> 31);
  v13 = v12 | ((unsigned int)write(2, &dword_3FDAF8, 3u) >> 31);
  v14 = strlen(a3);
  v15 = v13 | ((unsigned int)write(2, a3, v14) >> 31);
  v16 = v15 | ((unsigned int)write(2, &word_3B6A00, 2u) >> 31);
  v17 = (const void *)sub_32727C(a4);
  v18 = (const char *)sub_32727C(a4);
  v19 = strlen(v18);
  v20 = v16 | ((unsigned int)write(2, v17, v19) >> 31);
  if ( v20 | ((unsigned int)write(2, &word_356638, 1u) >> 31) )
    v21 = -2;
  else
    v21 = -1;
  exit(v21);
}
