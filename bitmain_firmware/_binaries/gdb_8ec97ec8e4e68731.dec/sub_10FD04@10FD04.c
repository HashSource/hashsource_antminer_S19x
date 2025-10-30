int __fastcall sub_10FD04(int a1)
{
  int v1; // r4
  int v3; // r0
  _BYTE v4[20]; // [sp+4h] [bp-14h] BYREF

  v1 = a1;
  if ( sub_15DA44(a1, &unk_3CFDC4) || sub_15DA44(v1, &unk_3CFDA4) )
  {
    sub_92F64(9, "cfa not available for record btrace target");
  }
  else
  {
    while ( sub_15DA8C(v1) == 2 )
      v1 = ((int (__fastcall *)(int))loc_15FA88)(v1);
    if ( ((int (__fastcall *)(int))loc_160460)(v1) == 3 )
      goto LABEL_11;
    ((void (__fastcall *)(_BYTE *, int))loc_15CFA0)(v4, v1);
    if ( (v4[12] & 7) == 1 )
      return sub_15D878(v1);
  }
  sub_92F64(9, "can't compute CFA for this frame: frame base not available");
LABEL_11:
  v3 = sub_92F64(9, "can't compute CFA for this frame: required registers or memory are unavailable");
  return sub_10FDC4(v3);
}
