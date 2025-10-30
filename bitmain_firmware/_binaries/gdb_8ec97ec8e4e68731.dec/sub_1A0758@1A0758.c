void __fastcall sub_1A0758(_BYTE *a1)
{
  void *v2; // r5
  void *v3; // r0
  int v4; // r0
  int v5; // [sp+0h] [bp-Ch] BYREF
  int v6; // [sp+4h] [bp-8h] BYREF

  v5 = 0;
  v6 = 0;
  v2 = sub_9253C((int)sub_2589B8, (int)&v5);
  v3 = sub_9253C((int)sub_2589B8, (int)&v6);
  if ( !a1 || !*a1 )
    sub_946E0("You must follow the `macro expand-once' command with the expression\nyou want to expand.");
  v4 = sub_1A2BB4(v3);
  v5 = v4;
  if ( v4 )
    sub_1A29D4(a1, sub_1A2C54, v4);
  sub_259B34("GDB has no preprocessor macro information for that code.\n");
  sub_92620(v2);
}
