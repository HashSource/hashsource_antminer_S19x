char *__fastcall sub_11E00C(int a1)
{
  char *result; // r0
  char *v3; // r4
  int v4; // r5
  int v5; // r0
  int v6; // r3
  void *v7[2]; // [sp+4h] [bp-8h] BYREF

  result = sub_11DF20(a1);
  v3 = result;
  if ( result )
  {
    v4 = sub_11054C(a1);
    v7[0] = (void *)sub_AE2B4(v4);
    v5 = sub_AE2A8(v4);
    v6 = *((_DWORD *)v3 + 2);
    if ( v6 )
      return (char *)sub_B0A18(0, v7, v5, v6);
    else
      return (char *)(*((int (__fastcall **)(_DWORD, void **, int))v3 + 5))(0, v7, v5);
  }
  return result;
}
