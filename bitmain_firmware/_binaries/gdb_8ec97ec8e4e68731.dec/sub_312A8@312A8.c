int __fastcall sub_312A8(int a1, int a2)
{
  int v2; // r4
  int v3; // r5
  int v7; // r8
  int v8; // r0
  int v9; // r3
  int v10; // r2
  int v11; // r1
  int v12; // r2
  int v13; // r0
  const char *v14; // r0

  v2 = *(_DWORD *)(a1 + 4);
  if ( *(_BYTE *)(v2 + 8) )
    return *(_DWORD *)v2;
  v3 = *(_DWORD *)(v2 + 4);
  if ( a2 )
  {
    if ( *(int *)(sub_31248() + 28) >= 0 )
    {
      v7 = *(_DWORD *)(v2 + 16);
      v8 = sub_2AD7AC(a2, ".dynamic");
      if ( v8 )
      {
        v9 = *(_DWORD *)(v8 + 28);
        if ( v3 + v9 != v7 )
        {
          v10 = *(_DWORD *)(a2 + 4);
          v3 = v7 - v9;
          v11 = *(_DWORD *)(v10 + 4);
          if ( v11 == 5 )
            v12 = *(_DWORD *)(v10 + 444);
          else
            v12 = 4095;
          if ( v11 == 5 )
            v12 = *(_DWORD *)(v12 + 20) - 1;
          if ( (v3 & v12) != 0 )
          {
            sub_946B0(
              ".dynamic section for \"%s\" is not at the expected address (wrong library or version mismatch?)",
              (const char *)(a1 + 520));
          }
          else if ( dword_48A514 )
          {
            v13 = sub_16F654();
            v14 = (const char *)sub_25AC8C(v13, v3);
            sub_259858(
              "Using PIC (Position Independent Code) prelink displacement %s for \"%s\".\n",
              v14,
              (const char *)(a1 + 520));
          }
        }
      }
    }
  }
  *(_DWORD *)v2 = v3;
  *(_BYTE *)(v2 + 8) = 1;
  return v3;
}
