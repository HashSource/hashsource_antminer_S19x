int __fastcall sub_4B3A8(int result)
{
  int v1; // r5
  int v2; // r3
  char v3[2052]; // [sp+0h] [bp-804h] BYREF

  v1 = result;
  if ( (unsigned int)dword_B308C > 4 )
  {
    strcpy(v3, "[DEBUG] Send work for hw sweep.\n");
    result = sub_3B6AC(4, v3, 0, *(int *)"ep.\n");
  }
  if ( dword_535D94 )
  {
    v2 = *(_DWORD *)(dword_535D94 + 4);
    if ( v2 )
      return (*(int (__fastcall **)(int, int))(v2 + 28))(255, v1);
  }
  if ( (unsigned int)dword_B308C > 3 )
  {
    strcpy(v3, "Handle is NULL.\n");
    return sub_3B6AC(3, v3, 0, *(int *)"LL.\n");
  }
  return result;
}
