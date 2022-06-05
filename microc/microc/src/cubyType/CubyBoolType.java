package cubyType;

public class CubyBoolType extends CubyBaseType{
    private boolean value;

    public CubyBoolType() {
        this.value = false;
    }

    public CubyBoolType(boolean value) {
        this.value = value;
    }

    public boolean getValue() {
        return value;
    }

    public void setValue(boolean value) {
        this.value = value;
    }

    
}
