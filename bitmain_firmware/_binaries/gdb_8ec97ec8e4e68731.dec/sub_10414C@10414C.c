int *__fastcall sub_10414C(int *a1, char *s, char *a3, _DWORD *a4, int a5, int a6)
{
  size_t v9; // r7
  size_t v10; // r10
  _BYTE v12[4]; // [sp+8h] [bp-2Ch] BYREF
  _DWORD *v13; // [sp+Ch] [bp-28h]

  if ( *s )
  {
    v13 = a4;
    v9 = strlen(s);
    v10 = strlen(a3);
    memcpy(v12, s, v9);
    v12[v9] = 46;
    memcpy(&v12[v9 + 1], a3, v10 + 1);
    a4 = v13;
    a3 = v12;
  }
  sub_103CD4(a1, 0, a3, a4, a5, a6);
  return a1;
}
