unsigned int __fastcall sub_25B294(char *a1)
{
  unsigned int v2; // r6
  char *v4; // [sp+4h] [bp-4h] BYREF

  if ( !a1 )
    sub_51E9C("process-id to attach");
  v4 = a1;
  v2 = strtoul(a1, &v4, 0);
  if ( !v2 && v4 == a1 || v4 != &a1[strlen(a1)] )
    sub_946E0("Illegal process-id: %s.", a1);
  return v2;
}
