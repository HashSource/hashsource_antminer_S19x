int __fastcall sub_3CDA0(int a1)
{
  int v1; // r4
  FILE *v2; // r0
  FILE *v3; // r5
  int v4; // r7
  size_t v5; // r6
  void *v7; // r0

  v1 = a1;
  if ( *(_BYTE *)(a1 + 385) || *(_BYTE *)(a1 + 384) )
    a1 += 256;
  v2 = fopen((const char *)a1, "r");
  v3 = v2;
  v4 = (int)v2;
  if ( v2 )
  {
    fseek(v2, 0, 2);
    v5 = ftell(v3);
    fseek(v3, 0, 0);
    if ( v5 && (v7 = calloc(v5, 1u), (*(_DWORD *)(v1 + 388) = v7) != 0) )
    {
      if ( v5 == fread(v7, 1u, v5, v3) )
      {
        *(_DWORD *)(v1 + 392) = v5;
        v4 = 1;
        *(_DWORD *)(v1 + 396) = v5;
      }
      else
      {
        v4 = 0;
        free(*(void **)(v1 + 388));
      }
    }
    else
    {
      v4 = 0;
    }
    fclose(v3);
  }
  return v4;
}
