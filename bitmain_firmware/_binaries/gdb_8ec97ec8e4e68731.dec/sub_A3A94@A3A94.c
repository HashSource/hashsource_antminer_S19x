int __fastcall sub_A3A94(char *a1, int a2, int a3)
{
  int v6; // r7
  unsigned int v7; // r6
  char *v8; // r0
  int v10; // [sp+14h] [bp-10h] BYREF
  int v11; // [sp+18h] [bp-Ch] BYREF
  int v12; // [sp+1Ch] [bp-8h] BYREF

  v6 = sub_B894C(a1);
  v11 = 0;
  v12 = 0;
  v7 = __clz(sub_53238(a3) - 1);
  if ( a1 )
    v8 = a1;
  else
    v8 = "";
  sub_9DD64(v8, 1, &v10, &v11, &v12);
  return sub_A35F4(v6, v10, v11, v12, v7 >> 5, 1, a2);
}
