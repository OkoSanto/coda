/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 1.3.36
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package nl.stcorp.coda;

public enum NativeTypeEnum {
  coda_native_type_not_available(-1),
  coda_native_type_int8,
  coda_native_type_uint8,
  coda_native_type_int16,
  coda_native_type_uint16,
  coda_native_type_int32,
  coda_native_type_uint32,
  coda_native_type_int64,
  coda_native_type_uint64,
  coda_native_type_float,
  coda_native_type_double,
  coda_native_type_char,
  coda_native_type_string,
  coda_native_type_bytes;

  public final int swigValue() {
    return swigValue;
  }

  public static NativeTypeEnum swigToEnum(int swigValue) {
    NativeTypeEnum[] swigValues = NativeTypeEnum.class.getEnumConstants();
    if (swigValue < swigValues.length && swigValue >= 0 && swigValues[swigValue].swigValue == swigValue)
      return swigValues[swigValue];
    for (NativeTypeEnum swigEnum : swigValues)
      if (swigEnum.swigValue == swigValue)
        return swigEnum;
    throw new IllegalArgumentException("No enum " + NativeTypeEnum.class + " with value " + swigValue);
  }

  @SuppressWarnings("unused")
  private NativeTypeEnum() {
    this.swigValue = SwigNext.next++;
  }

  @SuppressWarnings("unused")
  private NativeTypeEnum(int swigValue) {
    this.swigValue = swigValue;
    SwigNext.next = swigValue+1;
  }

  @SuppressWarnings("unused")
  private NativeTypeEnum(NativeTypeEnum swigEnum) {
    this.swigValue = swigEnum.swigValue;
    SwigNext.next = this.swigValue+1;
  }

  private final int swigValue;

  private static class SwigNext {
    private static int next = 0;
  }
}

