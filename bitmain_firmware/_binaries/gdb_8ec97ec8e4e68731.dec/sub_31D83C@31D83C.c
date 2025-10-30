void *__fastcall sub_31D83C(char *a1, int a2, int *a3)
{
  void *result; // r0
  int v5; // r3
  void *ptr[2]; // [sp+0h] [bp-14h] BYREF
  int v7; // [sp+8h] [bp-Ch]
  int v8; // [sp+Ch] [bp-8h]

  ptr[0] = 0;
  ptr[1] = 0;
  v7 = 0;
  v8 = 0;
  if ( sub_31D5FC(a1, a2, (void (__fastcall *)(_BYTE *))sub_3145C8, (int)ptr) )
  {
    result = ptr[0];
    if ( v8 )
      v5 = 1;
    else
      v5 = v7;
    *a3 = v5;
  }
  else
  {
    free(ptr[0]);
    *a3 = 0;
    return 0;
  }
  return result;
}
