void *__fastcall sub_31D8A8(int a1, _DWORD *a2, unsigned int a3, int *a4)
{
  void *result; // r0
  int v7; // r3
  size_t i; // r4
  void *v9; // r0
  int v10; // r3
  _DWORD *v11; // [sp+4h] [bp-14h]
  void *ptr[2]; // [sp+8h] [bp-10h] BYREF
  size_t v13; // [sp+10h] [bp-8h]
  int v14; // [sp+14h] [bp-4h]

  ptr[0] = 0;
  ptr[1] = 0;
  v13 = 0;
  v14 = 0;
  if ( a3 )
  {
    for ( i = 2; a3 > i; i *= 2 )
      ;
    v11 = a2;
    v9 = malloc(i);
    a2 = v11;
    if ( v9 )
      ptr[0] = v9;
    else
      v10 = 1;
    if ( v9 )
      v13 = i;
    else
      v14 = v10;
  }
  if ( sub_31D4F0(a1, a2, (void (__fastcall *)(_BYTE *))sub_3145C8, (int)ptr) )
  {
    result = ptr[0];
    if ( v14 )
      v7 = 1;
    else
      v7 = v13;
    *a4 = v7;
  }
  else
  {
    free(ptr[0]);
    *a4 = 0;
    return 0;
  }
  return result;
}
