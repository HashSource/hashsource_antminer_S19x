char *__fastcall sub_204308(int a1)
{
  int v1; // r4
  int v4; // r0
  _BYTE *v5; // r2
  int v6; // r0
  char *v7; // r6
  bool v8; // zf
  int v9; // [sp+4h] [bp-4h] BYREF

  v1 = *(_DWORD *)(a1 + 28);
  if ( !v1 )
  {
    v4 = sub_204098(*(const char **)(a1 + 12), *(const char **)(*(_DWORD *)(a1 + 4) + 28), (const char **)(a1 + 28));
    if ( v4 >= 0 )
    {
      close(v4);
      return *(char **)(a1 + 28);
    }
    else
    {
      v5 = *(_BYTE **)(a1 + 12);
      v6 = *(_DWORD *)(*(_DWORD *)(a1 + 4) + 28);
      if ( v6 && *v5 != 47 )
        v7 = (char *)sub_31E27C(v6, &word_398974, v5);
      else
        v7 = (char *)sub_327254(*(_DWORD *)(a1 + 12));
      sub_203FF4(&v9, v7);
      v1 = v9;
      v8 = v9 == 0;
      *(_DWORD *)(a1 + 28) = v9;
      if ( v8 )
      {
        *(_DWORD *)(a1 + 28) = v7;
        return v7;
      }
      else
      {
        free(v7);
      }
    }
  }
  return (char *)v1;
}
