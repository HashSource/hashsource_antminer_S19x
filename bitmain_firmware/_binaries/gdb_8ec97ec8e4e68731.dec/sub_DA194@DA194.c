int __fastcall sub_DA194(const char *a1, int a2, int a3)
{
  int v4; // r5
  unsigned int v5; // r4
  char *v6; // r0
  const char *v7; // r7
  int result; // r0
  char *v9; // [sp+4h] [bp-8h] BYREF

  v9 = (char *)a1;
  v4 = sub_B894C((int)a1);
  v5 = sub_53238(a3);
  v6 = v9;
  if ( !v9 )
  {
    v6 = "";
    v9 = "";
  }
  v9 = (char *)sub_9360C(v6);
  v7 = sub_D0C88((const char **)&v9);
  if ( *v9 && !isspace((unsigned __int8)*v9) )
    sub_946E0("Junk at end of arguments.");
  switch ( v5 )
  {
    case 0u:
    case 2u:
      result = sub_DA08C(v4, v5 <= 1, (int)v7, (int)&unk_478694);
      break;
    case 1u:
    case 3u:
      result = sub_DA08C(v4, v5 <= 1, (int)v7, (int)&unk_4786DC);
      break;
    default:
      sub_946E0("unsupported or unknown fork kind; cannot catch it");
  }
  return result;
}
