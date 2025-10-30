bool __fastcall sub_A2514(int a1)
{
  int v1; // r0
  int v2; // r5
  int v3; // r3

  v1 = sub_A0870(a1);
  v2 = v1;
  if ( !dword_46BBDC && sub_A0E38(v1, "___XVS") )
    return 0;
  v3 = *(_DWORD *)(v2 + 24);
  return *(_BYTE *)v3 == 3 && *(_WORD *)(v3 + 4) == 1 && strcmp(*(const char **)(*(_DWORD *)(v3 + 24) + 16), "F") == 0;
}
