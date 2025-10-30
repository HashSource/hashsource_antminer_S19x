void __fastcall sub_A689C(int a1, int a2, char *a3, int a4, int (__fastcall *a5)(char **, char *))
{
  int v5; // r4
  int v6; // r5
  void *v7; // r7
  char *v8; // r1
  char **var8[9]; // [sp+Ch] [bp-8h] BYREF

  v5 = 0;
  v6 = sub_A4A9C(a2, a1, a3, var8, 0);
  v7 = sub_9253C((int)sub_9AD58, (int)var8[0]);
  if ( v6 > 0 )
  {
    do
      v8 = var8[0][2 * v5++];
    while ( a5(var8[8], v8) && v6 != v5 );
  }
  sub_92620(v7);
}
