void __fastcall sub_16F6C8(int *a1, int a2)
{
  ASN1_OBJECT_free(*a1);
  *a1 = a2;
}
