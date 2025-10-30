int __fastcall sub_A39A0(char *a1, int a2, int a3)
{
  int v6; // r5
  int v7; // r6
  char *v8; // r0
  const char *v9; // r4
  _BOOL4 v10; // r6
  int v11; // r8
  _BOOL4 v12; // r0
  _BYTE *v13; // r0
  int v14; // r3

  v6 = sub_B894C(a1);
  v7 = sub_53238(a3) - 1;
  if ( a1 )
    v8 = a1;
  else
    v8 = "";
  v9 = (const char *)sub_9360C(v8);
  v10 = v7 == 0;
  if ( strncmp(v9, "if", 2u) )
    goto LABEL_10;
  v11 = *((unsigned __int8 *)v9 + 2);
  v12 = isspace(v11) != 0;
  if ( !v11 )
    v12 = 1;
  if ( v12 )
  {
    v13 = (_BYTE *)sub_9360C(v9 + 2);
    if ( !*v13 )
      sub_946E0("condition missing after `if' keyword");
    v14 = sub_327254(v13);
  }
  else
  {
LABEL_10:
    v14 = *(unsigned __int8 *)v9;
    if ( *v9 )
      sub_946E0("Junk at end of arguments.");
  }
  return sub_A35F4(v6, 2, 0, v14, v10, 1, a2);
}
