int sub_383C0()
{
  _DWORD *v0; // r2
  int v1; // r3
  int v2; // t1
  char v4[2048]; // [sp+0h] [bp-800h] BYREF

  if ( (unsigned int)dword_9E31C > 4 )
  {
    strcpy(v4, "[DEBUG] Check if all chain pattern test done.\n");
    sub_47AB4(4, v4, 0);
  }
  if ( dword_1AEA78 && *(_DWORD *)(dword_1AEA78 + 4) )
  {
    v0 = (_DWORD *)(dword_1AEA78 + 8);
    v1 = dword_A0D68;
    while ( 1 )
    {
      v2 = *(_DWORD *)(v1 + 4);
      v1 += 4;
      if ( v2 == 1 && *v0 != 2 )
        break;
      ++v0;
      if ( v1 == dword_A0D68 + 64 )
        return 1;
    }
    return 0;
  }
  else if ( (unsigned int)dword_9E31C > 3 )
  {
    strcpy(v4, "Handle is NULL.\n");
    sub_47AB4(3, v4, 0);
    return 1;
  }
  else
  {
    return 1;
  }
}
