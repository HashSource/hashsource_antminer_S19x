int __fastcall sub_AF570(int a1)
{
  void *v2; // r0
  void *v4; // r0
  void *v5; // r0
  void *v6; // r0
  void *v7; // r0

  if ( !*(_BYTE *)(a1 + 144) || (v4 = *(void **)(a1 + 120), *(_BYTE *)(a1 + 144) = 0, v4 == (void *)(a1 + 128)) )
  {
    if ( !*(_BYTE *)(a1 + 116) )
      goto LABEL_3;
  }
  else
  {
    sub_339E64(v4);
    if ( !*(_BYTE *)(a1 + 116) )
      goto LABEL_3;
  }
  v5 = *(void **)(a1 + 92);
  *(_BYTE *)(a1 + 116) = 0;
  if ( v5 != (void *)(a1 + 100) )
  {
    sub_339E64(v5);
    if ( !*(_BYTE *)(a1 + 88) )
      goto LABEL_4;
    goto LABEL_12;
  }
LABEL_3:
  if ( !*(_BYTE *)(a1 + 88) )
    goto LABEL_4;
LABEL_12:
  v6 = *(void **)(a1 + 64);
  *(_BYTE *)(a1 + 88) = 0;
  if ( v6 != (void *)(a1 + 72) )
  {
    sub_339E64(v6);
    if ( !*(_BYTE *)(a1 + 60) )
      goto LABEL_5;
    goto LABEL_14;
  }
LABEL_4:
  if ( !*(_BYTE *)(a1 + 60) )
    goto LABEL_5;
LABEL_14:
  v7 = *(void **)(a1 + 32);
  *(_BYTE *)(a1 + 60) = 0;
  if ( v7 != (void *)(a1 + 40) )
    sub_339E64(v7);
LABEL_5:
  v2 = *(void **)(a1 + 8);
  if ( v2 != (void *)(a1 + 16) )
    sub_339E64(v2);
  return a1;
}
