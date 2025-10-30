int __fastcall sub_2E904(int a1, int (__fastcall *a2)(const char *, int, void *, const char *, int), int a3)
{
  int v5; // r6
  int result; // r0

  v5 = sub_163E78(a1);
  result = a2(".reg", 72, &unk_34BF04, 0, a3);
  if ( *(int *)(v5 + 16) > 0 )
    return a2(".reg-arm-vfp", 260, &unk_34BF14, "VFP floating-point", a3);
  if ( *(_DWORD *)(v5 + 8) )
    return a2(".reg2", 116, &unk_34BF24, "FPA floating-point", a3);
  return result;
}
