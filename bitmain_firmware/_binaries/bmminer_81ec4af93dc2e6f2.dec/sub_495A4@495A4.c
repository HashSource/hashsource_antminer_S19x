int __fastcall sub_495A4(int result)
{
  int v1; // r5
  int v2; // r3
  char v3[2052]; // [sp+0h] [bp-804h] BYREF

  v1 = result;
  if ( (unsigned int)off_AFC24 > 4 )
  {
    strcpy(v3, "[DEBUG] Send work for hw sweep.\n");
    result = sub_3AF5C(4, v3, 0, *(int *)"ep.\n");
  }
  if ( dword_530F08 )
  {
    v2 = *(_DWORD *)(dword_530F08 + 4);
    if ( v2 )
      return (*(int (__fastcall **)(int, int))(v2 + 28))(255, v1);
  }
  if ( (unsigned int)off_AFC24 > 3 )
    return sub_49460();
  return result;
}
