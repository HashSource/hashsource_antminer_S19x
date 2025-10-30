int __fastcall sub_C80D8(int a1)
{
  int v2; // r4
  const char *v3; // r1
  char *v4; // r6
  int result; // r0
  char *v6; // r2
  _BYTE v7[20]; // [sp+4h] [bp-4Ch] BYREF
  int v8; // [sp+18h] [bp-38h]

  v2 = *(_DWORD *)sub_242FDC(a1);
  sub_2665F0(v7);
  if ( v8 )
  {
    sub_B7694(4);
    sub_2575A4(v2, "addr");
  }
  sub_B7694(5);
  v3 = *(const char **)(a1 + 140);
  if ( *(_BYTE *)(a1 + 136) )
  {
    if ( v3 )
    {
      v4 = sub_93140("load of library matching %s", v3);
      goto LABEL_8;
    }
    v4 = (char *)sub_327254("load of library");
  }
  else
  {
    if ( v3 )
    {
      v4 = sub_93140("unload of library matching %s", v3);
LABEL_8:
      sub_2575E8(v2, "what", v4);
      if ( !v4 )
        goto LABEL_9;
      goto LABEL_16;
    }
    v4 = (char *)sub_327254("unload of library");
  }
  sub_2575E8(v2, "what", v4);
LABEL_16:
  free(v4);
LABEL_9:
  result = sub_2573F0(v2);
  if ( result )
  {
    v6 = "load";
    if ( !*(_BYTE *)(a1 + 136) )
      v6 = "unload";
    return sub_2575E8(v2, "catch-type", v6);
  }
  return result;
}
