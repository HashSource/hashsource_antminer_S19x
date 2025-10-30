int __fastcall sub_36F78(int result)
{
  int v1; // r5
  int v2; // r3
  char v3[2052]; // [sp+0h] [bp-804h] BYREF

  v1 = result;
  if ( (unsigned int)dword_9E31C > 4 )
  {
    strcpy(v3, "[DEBUG] Send work for hw sweep.\n");
    result = sub_47AB4(4, v3, 0);
  }
  if ( dword_1AEA78 )
  {
    v2 = *(_DWORD *)(dword_1AEA78 + 4);
    if ( v2 )
      return (*(int (__fastcall **)(int, int))(v2 + 28))(255, v1);
  }
  if ( (unsigned int)dword_9E31C > 3 )
    return sub_36E34();
  return result;
}
