char **__fastcall sub_128020(int *a1, unsigned __int8 **a2, int a3)
{
  char **result; // r0
  __int16 v6; // r2
  unsigned __int8 *v7; // [sp+8h] [bp-14h] BYREF
  int v8; // [sp+Ch] [bp-10h] BYREF
  int v9; // [sp+10h] [bp-Ch] BYREF
  int v10; // [sp+14h] [bp-8h] BYREF

  v7 = *a2;
  if ( (sub_ADD48(&v7, &v8, &v9, &v10, a3) & 0x80) != 0 )
  {
    v6 = 102;
    goto LABEL_7;
  }
  if ( v9 != 6 )
  {
    v6 = 116;
LABEL_7:
    sub_D0048(13, 147, v6, (int)"crypto/asn1/a_object.c", 235);
    return 0;
  }
  result = sub_127E94(a1, (char **)&v7, v8);
  if ( result )
    *a2 = v7;
  return result;
}
